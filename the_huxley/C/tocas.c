#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void familias(int lacos[], int quantidade_de_caminhos, int contador, int quantmenos)
{
    if(contador >= quantidade_de_caminhos)
    {
        return;
    }
    else
    {
        if(lacos[contador] > quantmenos && lacos[contador] < 0)
        {
            familias(lacos, quantidade_de_caminhos, contador + 1, quantmenos);
        }
        else
        {
            int aux;
            if(lacos[contador] != quantmenos)
            {
            aux = lacos[contador];
            lacos[contador] = quantmenos;
            }
            else
            {
                return;
            }
            familias(lacos, quantidade_de_caminhos, aux, quantmenos);
        }
    }
}
int main() 
{
    int quantidade_de_caminhos, contador, x, quanttocas = 0;
    scanf("%i", &quantidade_de_caminhos);
    int ligacoes_das_tocas[quantidade_de_caminhos];

    for( contador = 0 ; contador < quantidade_de_caminhos ; ++contador )
    {
        scanf("%i", &ligacoes_das_tocas[contador]);
    }

    for( contador = 0 ; contador < quantidade_de_caminhos ; ++contador )
    {
        familias(ligacoes_das_tocas, quantidade_de_caminhos, 0, (contador + 1) * -1);
    }
    for( contador = 0 ; contador < quantidade_de_caminhos ; ++contador )
    {
        ligacoes_das_tocas[contador] *= -1;
        if(ligacoes_das_tocas[contador] > quanttocas)
        {
            quanttocas = ligacoes_das_tocas[contador];
        }
    }

    printf("%i\n", quanttocas);

	return 0;
}