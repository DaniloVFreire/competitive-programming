#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int matriz[3][3], linha, coluna, menor_valor = 100000000, smenosdprincipal = 0, contador = 0;
    double media = 0 ;


    for(linha = 0 ; linha < 3 ; ++linha)
    {
        for (coluna = 0; coluna < 3 ; ++coluna)
        {
            scanf("%i", &matriz[linha][coluna]);
        }
    }

    for(linha = 0 ; linha < 3 ; ++linha)
    {
        for (coluna = 0; coluna < 3 ; ++coluna)
        {
            if(matriz[linha][coluna] > 0)
            {
                media += matriz[linha][coluna];//media dos valores positivos
                ++contador;
            }

            if(matriz[linha][coluna] < menor_valor)
            {
                menor_valor = matriz[linha][coluna];//menor valor
            }

            if(linha != coluna)
            {
                smenosdprincipal += matriz[linha][coluna];//soma de todos os valores menos os da diagonal principal
            }
        }
    }

    media = media / contador;

    printf("%.2lf ", media);
    printf("%i ", menor_valor);
    if(menor_valor % 2 == 0)
    {
        printf("1 ");
    }
    else
    {
        printf("0 "); 
    }

    printf("%i", smenosdprincipal);

	return 0;
}