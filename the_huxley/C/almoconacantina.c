#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char comida[10], bebida[10];
    double valor;
    scanf("%s", &comida);
    scanf("%s", &bebida);
    if(comida[0] == 'L' || comida[0] == 'l')
    {
        valor += 8.00;
    }
    else if(comida[0] == 'E' || comida[0] == 'e')
    {
        valor += 11.00;
    }

    if(bebida[0] == 'R' || bebida[0] == 'r')
    {
        valor += 3.00;
    }
    else if(bebida[0] == 'S' || bebida[0] == 's')
    {
        valor += 2.50;
    }

    printf("%.2lf", valor);
	return 0;
}