#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double raio, area;

    scanf("%lf", &raio);
    
    raio = raio / 100
    ;
    area = 3.14159 * raio * raio;

    printf("Area = %.4lf", area);

	return 0;
}