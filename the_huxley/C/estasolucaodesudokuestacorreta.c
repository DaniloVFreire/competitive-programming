#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void as_solucoes_estao_corretas(int contador, int quantidade_de_jogos)
{
    if(contador > quantidade_de_jogos)
    {
        return;
    }
    else
    {
        printf("Instancia %i\n", contador);

        int matriz[9][9], linha, coluna, valor_a_ser_testado, erro = 0;

        for(linha = 0 ; linha < 9 ; ++linha)
        {
            for (coluna = 0; coluna < 9 ; ++coluna)
            {
                scanf("%i", &matriz[linha][coluna]);
            }
        }

        for(linha = 0 ; linha < 9 ; ++linha)
        {
            for (coluna = 0; coluna < 9 ; ++coluna)
            {
                if(coluna == 0)
                {
                    valor_a_ser_testado = matriz[linha][coluna];

                    if(matriz[linha][coluna] > 9 || matriz[linha][coluna] < 0)
                    {
                        erro = 1;
                    }
                }
                else
                {
                    if(matriz[linha][coluna] > 9 || matriz[linha][coluna] < 0)
                    {
                        erro = 1;
                    }

                    if(valor_a_ser_testado == matriz[linha][coluna])
                    {
                        erro = 1;
                    }
                }
            }
        }

        for(coluna = 0 ; linha < 9 ; ++linha)
        {
            for (linha = 0; coluna < 9 ; ++coluna)
            {
                if(linha == 0)
                {
                    valor_a_ser_testado = matriz[linha][coluna];

                    if(matriz[linha][coluna] > 9 || matriz[linha][coluna] < 0)
                    {
                        erro = 1;
                    }
                }
                else
                {
                    if(matriz[linha][coluna] > 9 || matriz[linha][coluna] < 0)
                    {
                        erro = 1;
                    }

                    if(valor_a_ser_testado == matriz[linha][coluna])
                    {
                        erro = 1;
                    }
                    
                }
            }
        }
        if(erro)
        {
            printf("NAO\n\n");
            as_solucoes_estao_corretas(++contador, quantidade_de_jogos);
            return;
        }
        else
        {
            printf("SIM\n\n");
            as_solucoes_estao_corretas(++contador, quantidade_de_jogos);
            return;
        }
    }
}

int main() 
{
    int quantidade_de_jogos;
    scanf("%i", &quantidade_de_jogos);
    as_solucoes_estao_corretas(1, quantidade_de_jogos);
    
	return 0;
}