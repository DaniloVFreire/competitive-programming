#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

void linha(int contadorsec, int num)
{
    if(num < contadorsec)
    {
        printf("%i ", num);
        linha (contadorsec, ++num);
    }
    else
    {
        printf("%i\n", num);
    }
    
}   

void escadinhamagica(int contadorp, int contadorsec)
{
    if(contadorp >= contadorsec)
    {
        linha(contadorsec, 1);
        escadinhamagica(contadorp, ++contadorsec);
    }
}

int main()
{
    int contador;

    scanf("%d", &contador);

    escadinhamagica(contador, 1);

    return 0;
}