#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void cicloduplicador(int contador, unsigned long long  int valorfinal)
{
    if (contador <=0)
    {
        printf("%llu", valorfinal);
    }
    else
    {
        valorfinal * 2;
        cicloduplicador(--contador, valorfinal * 2);
    }
}

int main() 
{
    int contador;
    scanf("%i", &contador);
    cicloduplicador(contador, 1);
	return 0;
}