#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    while(true)
    {
        char parancs[50];
        printf("Irjon be egy unix parancsot:\n");
        fgets(parancs, 50, stdin);
        system(parancs);
    }
    
    return 0;
}

