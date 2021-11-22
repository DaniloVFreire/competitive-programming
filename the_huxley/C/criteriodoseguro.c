#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	int sexo, idade;

    //sexo masculino = 1 sexo feminino = 0
    //mais de 40 anos = 1 menos = 0

    scanf("%i %i", &sexo, &idade);

    if(sexo == 0 && idade == 1)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    
    return 0;
}