#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int testededivisibilidadepor3(int num, int tentativa, int quantidadededivisiveis)
{
    if(num % tentativa == 0 && tentativa % 3 == 0)
    {
       ++quantidadededivisiveis;   
    }
    
    if(tentativa <= 2)
    {
        return quantidadededivisiveis;
    }

    return testededivisibilidadepor3(num, --tentativa, quantidadededivisiveis);
}

int main() 
{
    int num, quantdiv3, tentativa;

    scanf("%i", &num);
    
    tentativa = num;

    quantdiv3 = testededivisibilidadepor3(num,tentativa, 0);
    
    if(quantdiv3 != 0)
    {
        printf("%i", quantdiv3);
    }
    else
    {
        printf("O numero nao possui divisores multiplos de 3!");
    }
    return 0;
}