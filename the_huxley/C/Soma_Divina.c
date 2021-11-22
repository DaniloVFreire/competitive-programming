#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int tamanho, contador;
    scanf("%i", &tamanho);
    int a1[tamanho * tamanho],a2[tamanho * tamanho];

    for( contador = 0 ; contador < tamanho * tamanho ; ++contador )
    {
        scanf("%i", &a1[contador]);
    }

    for( contador = 0 ; contador < tamanho * tamanho ; ++contador )
    {
        scanf("%i", &a2[contador]);
        printf("%i\n", a1[contador] + a2[contador]);
    }
    if(tamanho == 0)
    {
        printf("vazia");
    }
	return 0;
}