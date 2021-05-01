#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void handle_sigint_elso(int sig, int szamlalo){
    printf("Felfogott jel: SIGINT(%d)\n", sig);
    szamlalo++;
}
void sig_dfl(int sig){
    printf("Felfogott jel: SIGINT(%d)\n", sig);
}
void handle_sigquit(int sig){
    printf("Felfogott jel: SIGQUIT(%d)\n", sig);
}
void handle_sigdfl(int sig){
    printf("Felfogott jel: SIGDFL(%d)\n", sig);
}

int main() {
    int szamlalo = 0;
    signal(SIGINT, szamlalo>1?handle_sigint_elso:sig_dfl);
    signal(SIGQUIT, handle_sigquit);
    while(1){
        printf("Varakozas\n");
        sleep(1);
    }
    return 0;
}