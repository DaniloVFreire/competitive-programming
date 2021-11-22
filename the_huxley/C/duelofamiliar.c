#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int duelo(int vida_luke, int vida_vader)
{
    int matriz1[3][3], matriz2[3][3], linha, coluna, dp1, dp2, c1, c2, s1 = 0, s2 = 0;
    if (vida_luke <= 0 || vida_vader <= 0)
    {
        if(vida_luke <= 0 && vida_vader <= 0)
        {
            printf("Houve empate.");
        }
        else if(vida_luke <= 0)
        {
            printf("Darth Vader venceu.");
        }
        else
        {
            printf("Luke Skywalker venceu.");
        }
    }
    else
    {
        for(linha = 0 ; linha < 3 ; ++linha)
        {
            for (coluna = 0; coluna < 3 ; ++coluna)
            {
                if(scanf("%i", &matriz1[linha][coluna]) == EOF)
                {
                    return duelo(0, 0);
                }

                s1 += matriz1[linha][coluna];
            }
        }

        for(linha = 0 ; linha < 3 ; ++linha)
        {
            for (coluna = 0; coluna < 3 ; ++coluna)
            {
                scanf("%i", &matriz2[linha][coluna]);
                s2 += matriz1[linha][coluna];
            }
        }

        dp1 = matriz1[0][0] + matriz1[1][1] + matriz1[2][2];
        dp2 = matriz2[0][0] + matriz2[1][1] + matriz2[2][2];

        if(s1 == 3)
        {
            if(dp1 == 3)
            {
                c1 = 1;
            }
            else
            {
                c1 = 2;
            }
        }
        else
        {
            c1 = 0;
        }

        if(s2 == 3)
        {
            if(dp1 == 3)
            {
                c2 = 1;
            }
            else
            {
                c2 = 2;
            }
        }
        else
        {
            c2 = 0;
        }
    }

    if(c1 == c2)
    {
        if(c1 == 0)
        {
            return duelo(vida_luke, vida_vader);
        }
        else
        {
            return duelo(vida_luke - 15, vida_vader - 15);
        }
    }
    else
    {
        if(c1 == 0 || c2 == 0)
        {
            return duelo(vida_luke - 15, vida_vader - 15);
        }
        else
        {
            return duelo(vida_luke, vida_vader);
        }
    }
}

int main() 
{
    int vida_luke, vida_vader;
    scanf("%i%i", &vida_luke, &vida_vader);

    duelo(vida_luke, vida_vader);

	return 0;
}