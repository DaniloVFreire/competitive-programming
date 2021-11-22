#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fatorial(int num1)
{
    int res;
    if (num1 > 0)
    {
    return num1 * fatorial(num1-1);
    }

    else
    {
        return 1;
    }
}

int checagem(int num1,int num2)
{
    -- num2;

    if(0 == num1 % num2 && num1 != num2)
    {
        return 0;
    }

    else if(num2 > 2)
    {
        return checagem(num1, num2);
    }
    
    else if(num2 == 2 || num1 == 1)
    {
        return 1;
    }
}

int fcp(int num1)
{
    int num2 = num1;
    -- num2;

    if(0 == num1 % num2 && num1 != num2)
    {
        return 0;
    }

    else if(num2 > 2)
    {
        return checagem(num1, num2);
    }
    
    else if(num2 == 2 || num1 == 1)
    {
        return 1;
    }
}


int checaprimos(int valoraserchecado)
{
    ++valoraserchecado;
    if(fcp(valoraserchecado))
    {
        return valoraserchecado;
    }
    else
    {
        return checaprimos(++valoraserchecado);
    }
}

int ciclodeconta(int contador,int numcrescente, double valfinal, int numprimo)
{
    ++numcrescente;
    if(numcrescente >= contador)
    {
        printf("\n%.2lf", valfinal);
    }
    else if(numcrescente == 1)
    {
        printf("1!/1");
        ++valfinal;
        ciclodeconta(contador, numcrescente, valfinal, numprimo);
    }
    else
    {
        numprimo = checaprimos(numprimo);
        printf(" + %i!/%i", numcrescente, numprimo);
        valfinal = valfinal + fatorial(numcrescente) / numprimo;
        ciclodeconta(contador, numcrescente, valfinal, numprimo);
    }
    
}

int main() 
{
    int contador;

    scanf("%i", &contador);

    ciclodeconta(contador, 0, 0.00, 1);

	return 0;
}