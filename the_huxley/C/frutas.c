#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int dias, contador, tamanho, seccont;
    double preco = 0, kilos = 0;
    scanf("%i", &dias);

    for(contador = 0; contador < dias ; ++contador)
    {
        double temppreco;
        char fruta[256];
        scanf("%lf", &temppreco);
        scanf(" %[^\n]s", fruta);
        preco += temppreco;
        tamanho = strlen(fruta);

        int tempkilo = 1;

        for(seccont = 0 ; seccont < tamanho ; ++seccont )
        {
            if(fruta[seccont] == ' ')
            {
                ++tempkilo;
            }
        }

        kilos += tempkilo;
        printf("dia %i: %i kg\n", contador + 1, kilos);
    }
    printf("%.2lf kg por dia\n", (kilos/dias));
    printf("R$ %.2lf por dia", (preco/dias));

	return 0;
}