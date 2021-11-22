#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int quant_pricesas, quant_eleitores, contador, temp, princesa;
    scanf("%i%i", &quant_pricesas, &quant_eleitores);
    int votos[quant_pricesas];

    for (princesa = 0; princesa < quant_pricesas ; ++princesa)
    {
        votos[princesa] = 0;
    }

    for(contador = 0 ; contador < quant_eleitores ; ++contador)
    {
        for (princesa = 0; princesa < quant_pricesas ; ++princesa)
        {
            scanf("%i", &temp);
            votos[princesa] += temp;
        }
    }
    for( contador = 0 ; contador < quant_pricesas ; ++contador)
    {
        printf("Princesa %i: %i voto(s)\n", contador + 1,votos[contador]);
    }
	return 0;
}