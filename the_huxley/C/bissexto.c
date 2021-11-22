#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    printf("digite o ano e vos diremos se é bissexto ou não\n");
    scanf("%d\n", &a);
    
    b = a%4;
    
    if(b > 0)
    {
    printf("NAOBISSEXTO\n");
    }
    else
    {
    printf("BISSEXTO\n");    
    }
	return 0;
}