#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int horas, minutos, segundos;
    scanf("%i%i%i", &horas ,&minutos ,&segundos);
    printf("%i", segundos + minutos * 60 + horas * 3600);
	return 0;
}