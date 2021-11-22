#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int algoritmodeeuclides(int num1,int num2)
{
    int divisor,dividendo, resto, quociente, aux;

    if (num1 > num2)
    {
       aux = num1;
       num1 = num2;
       num2 = aux;
    }

    dividendo = num2;
    divisor = num1;
    quociente = dividendo / divisor;
    resto = dividendo % divisor; 

    if(resto == 0)
    {
        return (divisor);
    }
    if(resto > 0)
    {
        return algoritmodeeuclides(num1, resto);
    }
}

int funcaociclica(int contador)
{
    int n1, n2;
    
    if(contador != 0)
    {
        scanf("%i %i", &n1, &n2);

        printf("MDC(%i,%i) = %i\n", n1, n2, algoritmodeeuclides(n1, n2));

        contador = contador - 1;

        return funcaociclica(contador);
    }
    else
    {
        return 0;
    }
}


int main()
{
    int contador;

    scanf("%i", &contador);
    funcaociclica(contador);


    
    return 0;
}