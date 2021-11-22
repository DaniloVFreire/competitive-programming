#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char numero_grande1[1000000], numero_grande2[1000000];
    int tamanho, tam1, tam2, contador_total, contador_n1, contador_n2, carryin = 0, tempsoma;

    scanf(" %[^\n]s", numero_grande1);
    scanf(" %[^\n]s", numero_grande2);

    tam1 = strlen(numero_grande1) -1;
    tam2 = strlen(numero_grande2) -1;

    if(tam1 > tam2)
    {
        tamanho = tam1 + 1;
    }
    else
    {
        tamanho = tam2 + 1;
    }

    char soma_final[tamanho];

    for( contador_total = tamanho, contador_n1 = tam1, contador_n2 = tam2 ; contador_total >= 0 ; --contador_total, --contador_n1, --contador_n2, tempsoma = 0 )
    {
        if(contador_n1 >= 0 && contador_n2 >= 0)
        {
            tempsoma = ((numero_grande1[contador_n1] - '0') + (numero_grande2[contador_n2] - '0') + carryin);
        }//ambos >= 0
        else if(contador_n2 >= 0)
        {
            tempsoma = ((numero_grande2[contador_n2] - '0') + carryin);
        }//só tam2 >= 0
        else if(contador_n1 >= 0)
        {
            tempsoma = ((numero_grande1[contador_n1] - '0') + carryin);
        }//só tam1 >= 

        carryin = tempsoma / 10;
        tempsoma = tempsoma % 10;

        soma_final[contador_total] = tempsoma + '0';
    }

    if(soma_final[0] == '0')
    {
        for(contador_total = 0 ; contador_total < tamanho ; ++contador_total)
        {
            soma_final[contador_total] = soma_final[contador_total + 1];
        }
        soma_final[tamanho] = '\0';
    }

    printf("%s", soma_final);

	return 0;
}