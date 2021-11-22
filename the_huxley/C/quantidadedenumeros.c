#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ciclo()
{
    int numero;
    printf("Digite um numero (negativo para parar o programa):\n");
    scanf("%i", &numero);
    if (numero >= 0)
    {
        printf("Numero: %i\n", numero);
        ciclo();
    }
}

int main() 
{
    ciclo();
	return 0;
}