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

void imprimir_array_invertido (int array[], int contador)
{
    if (contador < 0)
    {
        return;
    }
    else
    {
        printf("%i ", array[contador]);

        imprimir_array_invertido(array, contador - 1);
    }
}

int main() 
{
    int tamanho_do_array;
    scanf("%i", &tamanho_do_array);
    int array[tamanho_do_array];

    ler_array (0 , tamanho_do_array - 1,array);

    imprimir_array_invertido (array, tamanho_do_array - 1);

	return 0;
}