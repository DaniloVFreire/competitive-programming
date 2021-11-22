#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

void deslocamentoempassos(int contador, int x, int y, int numsec, int moedas, char movimentopassado)
{
    char deslocamento;

    scanf("\n%c", &deslocamento);

    if (numsec == contador) 
    {
        printf("%d", moedas);
    }
    else 
    {
        if (deslocamento == 'D') 
        {
            x = x + 1;
        }
        else if (deslocamento == 'C') 
        {
            y = y + 1;
        }

        if (x == y + 1 && (deslocamento == 'D' && movimentopassado == 'D') || movimentopassado=='a')
        {
            moedas = moedas + 1;
        }
        else if (y == x + 1 && (deslocamento == 'C' && movimentopassado == 'C') || movimentopassado=='a') 
        {
            moedas = moedas + 1;
        }
        deslocamentoempassos(contador, x, y, numsec + 1, moedas, deslocamento);
    }
}

int main()
{
    int contador;

    scanf("%d", &contador);

    deslocamentoempassos(contador, 0, 0, 0, -1, 'a');

    return 0;
}