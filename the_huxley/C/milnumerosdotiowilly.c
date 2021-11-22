#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void funcao_ciclica()
{
    int numero_a_ser_comparado;
    scanf("%i", &numero_a_ser_comparado);

    if(numero_a_ser_comparado != -1)
    {
        mil_numeros_do_senhor(998, numero_a_ser_comparado, 0);
    }
}

void mil_numeros_do_senhor(int contador, int numero_a_ser_comparado, int quantidade_de_igualdades)
{
    int numero_situacional;
    scanf("\n%i", &numero_situacional);

    if(numero_situacional == numero_a_ser_comparado)
    {
        ++quantidade_de_igualdades;
    }

    if(contador >= 0)
    {
        mil_numeros_do_senhor(--contador, numero_a_ser_comparado, quantidade_de_igualdades);
    }
    else
    {
        printf("%i appeared %i times\n", numero_a_ser_comparado, quantidade_de_igualdades);
        funcao_ciclica();
    }
}


int main() 
{
    funcao_ciclica();
	return 0;
}