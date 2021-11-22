#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ciclo(int npaga)
{
    int idade;
    char sexo;
    scanf("%i %c", &idade, &sexo);
    if(idade != 111)
    {
        if(idade > 60 || idade <= 10)
        {
            ++npaga;
        }
        else if((sexo == 'm' || sexo == 'M') && idade > 25 && idade <35)
        {
            ++npaga;
        }
        ciclo(npaga);
    }
    else
    {
        printf("%i", npaga);
    }
}

int main() 
{
    ciclo(0);
	return 0;
}