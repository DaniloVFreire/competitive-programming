#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	int codigo, quantidade;
    double valbruto, valfinal;

    scanf("%i %i", &codigo, &quantidade);


    if (codigo == 1)
    {
        valbruto = quantidade * 5.30;
    }

    if (codigo == 2)
    {
        valbruto = quantidade * 6.00;
    }

    if (codigo == 3)
    {
        valbruto = quantidade * 3.2;
    }

    if (codigo == 4)
    {
        valbruto = quantidade * 2.5;
    }
    
    if((valbruto >= 40.00)||(quantidade >= 15))
    {
        valbruto = valbruto * 0.85;
    }

    printf("R$ %.2lf", valbruto);

    return 0;
}