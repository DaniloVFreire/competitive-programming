#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int contador_de_descontos_reais(int contador)
{
    if(contador > 0)
    {
        double valor_original, valor_com_desconto;
        scanf("%lf %lf", &valor_original, &valor_com_desconto);

        return ((valor_original * 0.80) >= valor_com_desconto)
                ? 1 + contador_de_descontos_reais(contador - 1)
                : contador_de_descontos_reais(contador - 1);

    }
    return 0;
}

int main() 
{
    printf("%i", contador_de_descontos_reais(5));
	return 0;
}