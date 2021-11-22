#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int checagemdenumerotriagular(int num1, int num2,int num3, int numteste)
{
    if(num1 * num2 *num3 == numteste)
    {
        printf("%i * %i * %i = %i\nVerdadeiro\n", num1, num2, num3, numteste);
    }
    else if(num3 == numteste || numteste <= 0)
    {
        printf("Falso\n");
    }
    else
    {
        checagemdenumerotriagular(++num1, ++num2, ++num3, numteste);
    }
}

int main() 
{
    int numteste;

    scanf("%i", &numteste);

    checagemdenumerotriagular(1, 2, 3, numteste);

    return 0;
}