#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ciclo(int dia, int contador, int inicial, int final,int inicialt, int finalt, int casot,int casor,int numa)
{
    if (contador > 0)
    {
        int num;
        scanf("%i", &num);
        if(num > numa)
        {
            inicial = contador;
        }
        ciclo(++contador, inicial, final, casot, casor, num);
    }
    else
    {
        if (casot > casor)
        {
            casot = casor;
            inicial = inicialt;
            final = finalt;
        }
        printf("%i%i%i", inicial, final, casor);
    }
}

int main() 
{
    int dia;
    scanf("%i", &dia);
    ciclo(dia, 0, 0, 0, 0, 0, 0, 0);
	return 0;
}