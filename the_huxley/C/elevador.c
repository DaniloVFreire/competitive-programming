#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int contador_de_limite_do_elevador(int contador, int limite, int pessoas_no_elevador)
{
    if(contador > 0)
    {
        int entrando, saindo;
        scanf("%i %i", &saindo, &entrando);

        pessoas_no_elevador = pessoas_no_elevador + entrando - saindo;

        return ((pessoas_no_elevador) > limite)
                ? 1
                : contador_de_limite_do_elevador(contador - 1, limite, pessoas_no_elevador);

    }
    return 0;
}

int main() 
{
    int contador, capacidade_maxima;

    scanf("%i%i", &contador, &capacidade_maxima);

    if(contador_de_limite_do_elevador(contador, capacidade_maxima, 0))
    {
        printf("S");
    }
    else
    {
        printf("N");
    }
	return 0;
}