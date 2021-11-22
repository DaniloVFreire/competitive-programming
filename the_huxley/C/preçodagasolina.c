#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double litros, valor ;

    char caracter, a='A', g='G', d='D';

    scanf("%lf\n", &litros);
    scanf("%c", &caracter);


    if (caracter == a)
    {
        if (litros <= 20)
        {
            valor = litros * 0.97 * 1.9;
            printf("R$ %.2lf", valor);
        }
        
        if (litros > 20)
        {
            valor = litros * 0.95 * 1.9;
            printf("R$ %.2lf", valor);
        }    
    }

    if (caracter == g)
    {
        if (litros <= 20)
        {
            valor = litros * 0.96 * 2.5;
            printf("R$ %.2lf", valor);
        }
        
        if (litros > 20)
        {
            valor = litros * 0.94 * 2.5; 
            printf("R$ %.2lf", valor);
        }    
    }

        if (caracter == d)
    {
        if (litros <= 25)
        {
            valor = litros *1.66;
            printf("R$ %.2lf", valor);
        }
        
        if (litros > 25)
        {
            valor = litros * 0.96 * 1.66;   
            printf("R$ %.2lf", valor);
        }    
    }
    
    return 0;
}