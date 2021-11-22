#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double matriz[12][8], menorchance_de_chuva = 1.0;
    int linha, coluna, mlinha = 96, mcoluna = 96;
    for(linha = 0 ; linha < 12 ; ++linha)
    {
        for (coluna = 0; coluna < 8 ; ++coluna)
        {
            scanf("%lf", &matriz[linha][coluna]);
        }
    }
    for(linha = 0 ; linha < 12 ; ++linha)
    {
        for (coluna = 0; coluna < 8 ; ++coluna)
        {
            if(matriz[linha][coluna] < menorchance_de_chuva)
            {
                 menorchance_de_chuva = matriz[linha][coluna];
                mlinha = linha;
                mcoluna = coluna;
            }
        }
    }
    if(menorchance_de_chuva > 0.50)
    {
        printf("Proximo ano eu tento denovo...");
    }
    else
    {
        printf("O melhor dia e no ");
        //dia
        if(mcoluna == 0)
        {
            printf("Primeiro Sabado");
        }
        else if(mcoluna == 1)
        {
            printf("Primeiro Domingo");
        }
        else if(mcoluna == 2)
        {
            printf("Segundo Sabado");
        }
        else if(mcoluna == 3)
        {
            printf("Segundo Domingo");
        }
        else if(mcoluna == 4)
        {
            printf("Terceiro Sabado");
        }
        else if(mcoluna == 5)
        {
            printf("Terceiro Domingo");
        }
        else if(mcoluna == 6)
        {
            printf("Quarto Sabado");
        }
        else if(mcoluna == 7)
        {
            printf("Quarto Domingo");
        }
        //mes
        if(mlinha == 0)
        {
            printf(" de Janeiro");
        }
        if(mlinha == 1)
        {
            printf(" de Fevereiro");
        }
        if(mlinha == 2)
        {
            printf(" de Marco");
        }
        if(mlinha == 3)
        {
            printf(" de Abril");
        }
        if(mlinha == 4)
        {
            printf(" de Maio");
        }
        if(mlinha == 5)
        {
            printf(" de Junho");
        }
        if(mlinha == 6)
        {
            printf(" de Julho");
        }
        if(mlinha == 7)
        {
            printf(" de Agosto");
        }
        if(mlinha == 8)
        {
            printf(" de Setembro");
        }
        if(mlinha == 9)
        {
            printf(" de Ooutubro");
        }
        if(mlinha == 10)
        {
            printf(" de Novembro");
        }
        if(mlinha == 11)
        {
            printf(" de Dezembro");
        }

    }

	return 0;
}