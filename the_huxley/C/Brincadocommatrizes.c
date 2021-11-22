#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int matriz[3][3], linha, coluna, maiorvalor = -100000000, sdiagonalprincipal = 0, contador;
    double media = 0 ;


    for(linha = 0 ; linha < 3 ; ++linha)
    {
        for (coluna = 0; coluna < 3 ; ++coluna)
        {
            scanf("%i", &matriz[linha][coluna]);
        }
    }

    /*
    for(linha = 0 ; linha < 3 ; ++linha)
    {
        for (coluna = 0; coluna < 3 ; ++coluna)
        {
            if(coluna == 2)
            {
                printf("%i\n", matriz[linha][coluna]);
            }
            else
            {
                printf("%i ", matriz[linha][coluna]);
            }
        }
        
    }
    */


    for(linha = 0 ; linha < 3 ; ++linha)
    {
        for (coluna = 0; coluna < 3 ; ++coluna)
        {
            media += matriz[linha][coluna];
        }
    }

    media = media / 9;
    
    for(linha = 0 ; linha < 3 ; ++linha)
    {
        for (coluna = 0; coluna < 3 ; ++coluna)
        {
            if(matriz[linha][coluna] > maiorvalor)
            {
                maiorvalor = matriz[linha][coluna];
            }
        }
    }

    for( contador = 0 ; contador < 3 ; ++contador)
    {
        sdiagonalprincipal += matriz[contador][contador];
    }

    printf("%.2lf ", media);
    printf("%i ", maiorvalor);
    if(maiorvalor > 0)
    {
        printf("1 ");
    }
    else if(maiorvalor < 0)
    {
        printf("-1 ");
    }
    else
    {
        printf("0 "); 
    }
    printf("%i", sdiagonalprincipal);

	return 0;
}