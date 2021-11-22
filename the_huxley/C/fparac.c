#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int gf;
    double gc;

    scanf("%i", &gf);
    
    gc = (gf - 32) / 1.8;

    printf("%.2lf", gc);

	return 0;
}