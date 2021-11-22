#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print_logico(int limite_de_linha, int contador, int limite_total)
{
    if(contador > limite_total)
    {
        return;
    }
    else
    {
        if(contador % limite_de_linha == 0)
        {
            printf("%i\n", contador);
        }
        else
        {
            printf("%i ", contador);
        }

        print_logico(limite_de_linha, contador + 1, limite_total);
    }
}

int main() 
{
    int limite_na_linha, num_final;
    scanf("%i%i", &limite_na_linha, &num_final);

    print_logico(limite_na_linha, 1, num_final);

	return 0;
}