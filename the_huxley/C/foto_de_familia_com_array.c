#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void scan_array(int contador, int tamanho_do_array, double array[])
{
    if (contador < tamanho_do_array)
    {
        scanf("%lf", &array[contador]);

        scan_array(contador + 1, tamanho_do_array, array);
    }
}

void chamarsort(int tamanho_do_array, double vetor[], int indice_do_maior_valor)
{
    if (0 <= tamanho_do_array)
    {
        int maiorInd = bubblesort(0, tamanho_do_array, vetor, indice_do_maior_valor);

        double aux = vetor[tamanho_do_array];
        vetor[tamanho_do_array] = vetor[maiorInd];
        vetor[maiorInd] = aux;

        chamarsort(tamanho_do_array - 1, vetor, indice_do_maior_valor - 1);
    }

}

int bubblesort(int contador, int tamanho_do_array, double vetor[], int indice_do_maior_valor)
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
    double vetor[4];

    scan_array(0, 4, vetor);

    chamarsort(3, vetor, 4 - 1);

    printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n", vetor[0], vetor[2], vetor[3], vetor[1]);

    return 0;
}