#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ler_array(int contador, int maior_inidce_do_array, int array[])
{
    if ( contador > maior_inidce_do_array )
    {
        return;
    }
    else
    {
        scanf("%i", &array[contador]);
        ler_array(contador + 1, maior_inidce_do_array, array);
    }
}

int contagem_das_aparicoes_do_valor_a_ser_checado(int contador, int maior_indice_do_array, int array[], int valor_a_ser_chacado)
{
    if(contador > maior_indice_do_array)
    {
        return 0;
    }
    else
    {
        return ( array[contador] == valor_a_ser_chacado )
            ? 1 + contagem_das_aparicoes_do_valor_a_ser_checado(contador + 1, maior_indice_do_array, array, valor_a_ser_chacado)
            : contagem_das_aparicoes_do_valor_a_ser_checado(contador + 1, maior_indice_do_array, array, valor_a_ser_chacado);
    }
}

int main() 
{
    int array[10], valor_a_ser_checado;

    ler_array(0, 9, array);

    scanf("%i", &valor_a_ser_checado);

    printf("%i", contagem_das_aparicoes_do_valor_a_ser_checado(0, 9, array, valor_a_ser_checado));

	return 0;
}