#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, c, d, aux;
    scanf("%i", &a) ;
    scanf("%i", &b) ;
    scanf("%i", &c) ;
    if (a > b) 
    {
        aux = a;
		a = b  ;
		b = aux;
    }
    if (a > c) 
    {
        aux = a;
		a = c  ;
		c = aux;
    }

     if (b > c) 
    {
        aux = b;
		b = c  ;
		c = aux;
    }

    printf("%i\n", a);

    return 0;
}