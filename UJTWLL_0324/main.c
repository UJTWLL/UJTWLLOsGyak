#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
    int fajlmegnyit = open("ujtwll.txt", O_RDWR);
    if (fajlmegnyit < 0)
    {
        printf("Hiba a fajl megnyitasa soran.");
        return 1;
    }
    else
    {
        char fajlbuffer[100];
        int kurzormozgat = lseek(fajlmegnyit, 0, SEEK_SET);
        if(kurzormozgat < 0)
        {
            printf("Hiba a kurzor mozgatasa soran.");
            return 2;
        }
        else
        {
            int fajlolvas = read(fajlmegnyit, fajlbuffer, 100);
            if(fajlolvas < 0)
            {
                printf("Hiba a fajlbol olvasas soran.");
                return 3;
            }
            else
            {
                int kiiras = write(1, fajlbuffer, 100);
                if(kiiras < 0)
                {
                    printf("Hiba a kiiratas soran.");
                    return 4;
                }
                else
                {
                    int fajlbezar = close(fajlmegnyit);
                    if(fajlbezar < 0)
                    {
                        printf("Hiba a fajl bezarasa soran.");
                        return 5;
                    }
                }
            }
        }
    }
    return 0;
}
