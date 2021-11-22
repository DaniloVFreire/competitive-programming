#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void repetidor(int contador)
{
    if(contador < 100)
    {
        printf("\n%i", contador);
        repetidor(++contador);
    }
}

int main() 
{
    repetidor(0);
	return 0;
}