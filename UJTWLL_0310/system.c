#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("Letezo parancs: %d\n", system("clear"));
	printf("Nem letezo parancs: %d\n", system("hiba"));
}
