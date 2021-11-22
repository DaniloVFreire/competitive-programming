#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int quantosdigitos(int num, int quantcasas)
{
    if(num >= 10)
    {
        num / 10;
        quantosdigitos(num/10, ++quantcasas);
    }
    else
    {
        printf("%i", quantcasas);
    }
}

int main() 
{
    int num;
    scanf("%i", &num);
    quantosdigitos(num, 1);
	return 0;
}