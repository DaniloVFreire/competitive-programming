#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int o_valor_nao_se_repetiu(int array[], int tamanho_do_array, int valor_a_ser_checado)
{
    if(tamanho_do_array < 0)
    {
        return 1;
    }
    else
    {
        if (array[tamanho_do_array] == valor_a_ser_checado)
        {
            return 0;
        }
        
        return o_valor_nao_se_repetiu(array, tamanho_do_array - 1, valor_a_ser_checado);
    }
}

void figurinhas_e_quem_ganhou(int contador, int tamanho_do_array, int array[],int qpar, int qimpar, int spar, int simpar)
{
    if(contador < tamanho_do_array)
    {
        if(array[contador] % 2 == 0)
        {
            ++qpar;

            if(o_valor_nao_se_repetiu(array, contador - 1, array[contador]))
            {
                spar += array[contador];
            }
        }
        else if(array[contador] % 2 != 0 )
        {
            ++qimpar;

            if(o_valor_nao_se_repetiu(array, contador - 1, array[contador]))
            {
                simpar += array[contador];
            }
        }
        figurinhas_e_quem_ganhou(contador + 1, tamanho_do_array, array, qpar, qimpar, spar, simpar);
    }
    else
    {
        if(spar > simpar)
        {
            printf("%i\n%i\n%i", qpar, qimpar, spar);
        }
        else
        {
            printf("%i\n%i\n%i", qpar, qimpar, simpar);
        }
    } 
}

void ler_array(int contador, int tamanho_do_array, int array[])
{
    if (contador < tamanho_do_array)
    {
        scanf("%i", &array[contador]);

        ler_array(contador + 1, tamanho_do_array, array);
    }
}

int main() 
{
    int quantidade_de_figurinhas;
    scanf("%i", &quantidade_de_figurinhas);
    int espaco_amostral_de_figurinhas[quantidade_de_figurinhas];

    ler_array(0, quantidade_de_figurinhas, espaco_amostral_de_figurinhas);

    figurinhas_e_quem_ganhou(0, quantidade_de_figurinhas, espaco_amostral_de_figurinhas,0 ,0 ,0 ,0);

	return 0;
}