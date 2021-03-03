#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fadat;
    fadat=fopen("ujtwll.txt", "w");
    fprintf(fadat, "Ferencsik Márk\n");
    fprintf(fadat, "Programtervezõ Informatika\n");
    fprintf(fadat, "UJTWLL\n");
    fclose(fadat);
    return 0;
}
