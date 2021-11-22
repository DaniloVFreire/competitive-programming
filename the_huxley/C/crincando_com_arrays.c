#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

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

void scan_array(int contador, int tamanho_do_array, int array[])
{
    if (contador < tamanho_do_array)
    {
        scanf("%i", &array[contador]);

        scan_array(contador + 1, tamanho_do_array, array);
    }
}

int comparacaomenor(int vetor[], int contador, int tamanho_do_array, int quantmenor)
{
    if (contador <= tamanho_do_array)
    {
        if (vetor[contador] == vetor[0])
        {
            ++quantmenor;
        }
        comparacaomenor(vetor, contador + 1, tamanho_do_array, quantmenor);
    }
    else
    {
        return quantmenor;
    }
}

int situacaodomaior(int vetor[], int contador, int tamanho_do_array, int quantmaior)
{
    if (contador <= tamanho_do_array)
    {
        if (vetor[contador] == vetor[tamanho_do_array])
        {
            ++quantmaior;
        }
        situacaodomaior(vetor, contador + 1, tamanho_do_array, quantmaior);
    }
    else
    {
        return quantmaior;
    }
}

int main()
{
    int tamanho_do_array;
    scanf("%i", &tamanho_do_array);

    int vetor[tamanho_do_array];

    scan_array(0, tamanho_do_array, vetor);

    

    chamarsort(tamanho_do_array - 1, vetor, tamanho_do_array - 1);



    return 0;
}