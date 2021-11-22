#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double prever_proximo_alinhamento()
{

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

double scan_tempo_dos_planetas( int contador,int tamanho_do_array, int array[])
{
    if(contador >= tamanho_do_array)
    {
        return ; 
    }
    else
    {
        scanf("%i", &array[contador]);
        scan_tempo_dos_planetas(contador + 1, tamanho_do_array, array);
    }
}

int main() 
{
    int qunatidade_de_planetas;
    scanf("%i", &qunatidade_de_planetas);
    double array[qunatidade_de_planetas];

    scan_tempo_dos_planetas(0, qunatidade_de_planetas - 1, array);

    chamarsort(qunatidade_de_planetas, array, 0);

    prever_proximo_alinhamento(0, array, qunatidade_de_planetas - 1, );

	return 0;
}