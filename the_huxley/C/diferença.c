#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b, c, d, r;

    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    scanf("%i", &d);

    r = (a*b) - (c*d);

    printf("DIFERENCA = %i", r);


	return 0;
}