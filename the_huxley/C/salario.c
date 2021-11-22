#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int num, horas, x;
    double salario, vph;

    scanf("%i", &num);
    scanf("%i", &horas);    
    scanf("%lf", &vph);  

    salario = vph * horas;

    printf("NUMBER = %i\n", num);
    printf("SALARY = R$ %.2lf", salario);
	return 0;
}