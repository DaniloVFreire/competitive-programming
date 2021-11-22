#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double calculo_da_serie_definida(int contador, int tamanho_limite_do_calculo, double exponenciacao_variavel_de_dois, double valor_que_sofre_soma_e_subtracao, double var_sub, double var_soma)
{
    if (tamanho_limite_do_calculo < contador)
    {
        return 1;
    }
    else
    {
        if(contador % 2 == 0)
        {
            
            return (exponenciacao_variavel_de_dois / (valor_que_sofre_soma_e_subtracao + var_soma)) + calculo_da_serie_definida(contador + 1, tamanho_limite_do_calculo, exponenciacao_variavel_de_dois * 2, valor_que_sofre_soma_e_subtracao + var_soma, var_sub, var_soma + 1);
        }
        else
        {
            return ((valor_que_sofre_soma_e_subtracao + var_sub) / exponenciacao_variavel_de_dois) + calculo_da_serie_definida(contador + 1, tamanho_limite_do_calculo, exponenciacao_variavel_de_dois * 2, valor_que_sofre_soma_e_subtracao + var_sub, var_sub - 1, var_soma);
        }
    }
}

int main() 
{
    int tamanho_limite_do_calculo;
    scanf("%i", &tamanho_limite_do_calculo);

    printf("S: %.2lf", calculo_da_serie_definida(2, tamanho_limite_do_calculo, 2, 1, 0, 2));

	return 0;
}