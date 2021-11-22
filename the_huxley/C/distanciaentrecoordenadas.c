#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ciclo(int contador)
{
    float cord1, cord2, cord3, cord4, cordf;
    if(contador > 0)
    {
        scanf("%f%f%f%f", &cord1, &cord2, &cord3, &cord4);
        cordf = pow(( pow((cord1 - cord3), 2) + pow((cord2 - cord4), 2)), 0.5);
        printf("%.2f\n", cordf);
        ciclo(--contador);
    }

}

int main() 
{
    int contador;
    scanf("%i", &contador);
    ciclo(contador);
	return 0;
}