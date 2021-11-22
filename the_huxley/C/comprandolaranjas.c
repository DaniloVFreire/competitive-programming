#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int quantlaranjas;
    scanf("%i", &quantlaranjas);

    printf("%i", quantlaranjas / 12);
    printf("%.2lf", quantlaranjas * 0.70 );
	return 0;
}