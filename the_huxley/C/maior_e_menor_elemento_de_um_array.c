#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ler_array (int contador, int tamanho_do_array, int array[])
{
    if(contador > tamanho_do_array)
    {
        return;
    }
    else
    {
        scanf("%i", &array[contador]);

        ler_array(contador + 1, tamanho_do_array, array);
    }
}

void chamarsort(int tamanho_do_array, int vetor[], int indice_do_maior_valor)
{
    if (0 <= tamanho_do_array)
    {
        int maiorInd = bubblesort(0, tamanho_do_array, vetor, indice_do_maior_valor);

        int aux = vetor[tamanho_do_array];
        vetor[tamanho_do_array] = vetor[maiorInd];
        vetor[maiorInd] = aux;

        chamarsort(tamanho_do_array - 1, vetor, indice_do_maior_valor - 1);
    }
}

int bubblesort(int contador, int tamanho_do_array, int vetor[], int indice_do_maior_valor)
{
    if (contador == tamanho_do_array)
    {
        return indice_do_maior_valor;
    }
    else
    {
        return (vetor[contador] > vetor[indice_do_maior_valor])
                ? bubblesort(contador + 1, tamanho_do_array, vetor, contador)
                : bubblesort(contador + 1, tamanho_do_array, vetor, indice_do_maior_valor);
    }
}

int main() 
{
    int array[6];

    ler_array(0, 5, array);

    chamarsort(5, array, 5);

    printf("%i\n", array[0]);

    printf("%i", array[5]);

	return 0;
}