#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void vai_ou_nao(int valores[])
{
    scanf("%i", &valores[0]);
    if(valores[0] != -1)
    {
        recebe_mil_valores(1, valores);
    }
}

void recebe_mil_valores(int contador, int valores[])
{
    if (contador < 1000)
    {
        scanf("%i", &valores[contador]);
        recebe_mil_valores(contador + 1, valores);
    }
    else
    {
        int valor_a_ser_checado;
        scanf("%i", &valor_a_ser_checado);
        checagem(valor_a_ser_checado, valores, 0, 0);
    }

}

void checagem(int valor_a_ser_checado, int valores[], int contador, int num_de_casos_satisfeitos)
{
    if(contador < 1000)
    {
        if(valor_a_ser_checado == valores[contador])
        {
            ++num_de_casos_satisfeitos;
        }
        checagem(valor_a_ser_checado, valores, contador + 1, num_de_casos_satisfeitos);
    }
    else
    {
        printf("%i appeared %i times\n", valor_a_ser_checado, num_de_casos_satisfeitos);
        vai_ou_nao(valores);
    }
}

int main() 
{
    int valores[1000];
    vai_ou_nao(valores);
	return 0;
}