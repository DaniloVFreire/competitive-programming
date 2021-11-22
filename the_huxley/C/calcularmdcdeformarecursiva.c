#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int mdc(int num1,int num2)
{
    int resto, aux;

    if (num1 > num2)
    {
       aux = num1;
       num1 = num2;
       num2 = aux;
    }

    resto = num2 % num1; 

    if(resto == 0)
    {
        return (num1);
    }

    if(resto > 0)
    {
        return mdc(num1, resto);
    }
}


int main() 
{
    int a, b;

    scanf("%i %i", &a, &b);

    mdc(a,b);

    printf("%i", mdc(a,b));
    
	return 0;
}