#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, c, d;
    printf("digite o ano e vos diremos se é bissexto ou não\n");
    scanf("%d\n", &a);
    
    b = a%4;
    d = a%100;
    c = a%400;
    
    if(b < 0)
    {
    printf("NAOBISSEXTO");
    }
    
    if(b = 0, a < 100)
    {
    printf("BISSEXTO");
    }
    
     if(b = 0, c = 0,a > 100)
    {
    printf("BISSEXTO");
    }
    
    if(b = 0, c < 0, d = 0)
    {
    printf("NAOBISSEXTO");
    }
	return 0;
}