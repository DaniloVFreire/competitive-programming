#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fibonacci(int contador, int num1, int num2)
{
    if(contador <= 1)
    {
        printf("%i", num2);
    }
    else if(num1 == 0 && num2 == 0)
    {
        fibonacci(--contador, num1, ++num2);
    }
    else
    {
        fibonacci(--contador, num2, num2 + num1);
    }
}

int main() 
{
    int numeronaescala;
    scanf("%i", &numeronaescala);
    fibonacci(numeronaescala, 0, 0);
	return 0;
}