#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double num1, num2;
    
    printf("Digite um numero:\n");
    scanf("%lf", &num1);
    printf("Digite outro numero:\n");
    scanf("%lf", &num2);

    if(num1 < num2)
    {
        printf("Maior numero: %.1lf\n", num2);
    }
    else
    {
        printf("Maior numero: %.1lf\n", num1);
    }
	return 0;
}