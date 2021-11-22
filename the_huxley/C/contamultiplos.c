#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int conta_multiplos(int val1, int val2, int contador)
{
    if(contador >= 50)
    {
        return 0;
    }
    else
    {
        return (contador % val1 == 0 && contador % val2 == 0)
            ? 1 + conta_multiplos(val1, val2, contador + 1)
            : conta_multiplos(val1, val2, contador + 1);  
    } 
}

int main() 
{
    int val1, val2, aux;
    scanf("%i%i", &val1, &val2);

    if(val1 > val2)
    {
        aux = val1;
        val1 = val2;
        val2 = aux;
    }

    printf("%i", conta_multiplos(val1, val2, 1));

	return 0;
}