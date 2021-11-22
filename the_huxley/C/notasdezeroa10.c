#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ciclo()
{
    int nota;
    printf("Informe uma nota entre 0 e 10:\n");
    scanf("%i", &nota);
    if (nota < 0 || nota > 10)
    {
        printf("Valor invalido\n");
        ciclo();
    }
}

int main() 
{
    ciclo();
	return 0;
}