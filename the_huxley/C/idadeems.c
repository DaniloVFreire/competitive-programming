#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int idade, idadeems;

    scanf("%i", &idade);  

    idadeems = idade * 365 * 24 * 60 * 60;

    printf("%i\n", idadeems);

	return 0;
}