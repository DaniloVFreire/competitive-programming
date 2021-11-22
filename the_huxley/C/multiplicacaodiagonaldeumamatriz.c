#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ler_matriz(int tamanho, int matriz[][tamanho], int contador)
{
    if(contador > tamanho * tamanho - 1)
    {
        return;
    }
    else
    {
        scanf("%i", &matriz[contador%tamanho][contador/tamanho]);
        ler_matriz(tamanho, matriz, contador + 1);
    }
}

void multiplicar_diagonal(int tamanho, int matriz[][tamanho], int contador, int k)
{
    if(contador > tamanho)
    {
        return;
    }
    else
    {
        matriz[contador][contador] *= k;

        multiplicar_diagonal(tamanho, matriz, contador + 1, k);
    }
}

void imprimir_matriz(int tamanho, int matriz[][tamanho], int contador)
{
    if(contador > tamanho * tamanho - 1)
    {
        return;
    }
    else
    {
        if(contador%tamanho == 0 && contador/tamanho != 0)
        {
            printf("\n%i ", matriz[contador/tamanho][contador%tamanho]);
        }
        else
        {
                printf("%i ", matriz[contador/tamanho][contador%tamanho]);
        }
        imprimir_matriz(tamanho, matriz, contador + 1);
    }
}

void loop()
{
    int k, matriz[4][4];
    scanf("%i", &k);
    if(k != 0)
    {
    ler_matriz(4, matriz, 0);
    multiplicar_diagonal(4, matriz, 0, k);
    imprimir_matriz(4, matriz, 0);
    loop();
    }
}

int main() 
{
    loop();
	return 0;
}