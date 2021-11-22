#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ciclo(int contador)
{
    int angulo;
    scanf("%i", &angulo);
    if(angulo == 60 || angulo == 90 || angulo == 108 || angulo == 120 || angulo == 128 || angulo == 135 || angulo == 140 || angulo == 144 || angulo == 147 || angulo == 150)
    {
        printf("SIM\n");  
    }
    else
    {
        printf("NAO\n");
    }
    if(contador > 1)
    {
        ciclo(--contador);
    }
}

int main() 
{
    int contador;
    scanf("%i", &contador);
    ciclo(contador);
	return 0;
}