#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int extravaganciadosatos(int contador)
{
    int num;
    scanf("%i", &num);
    if(contador >= 0)
    {
        return num + extravaganciadosatos(--contador);
    }
    else 
    {
        return 0;
    }
}

int main() 
{
    double contador, extravaganciaideal;
    scanf("%lf%lf", &contador, &extravaganciaideal);

    if(extravaganciadosatos(contador)/ contador == extravaganciaideal)
    {
        printf("SIM");
    }
    else
    {
        printf("NAO");
    }
	return 0;
}