#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double a, b, c, d, aux;
    scanf("%lf %lf %lf %lf\n",&a, &b, &c, &d) ;
    if (a > b) ;
    {
        aux=b ;
        b=a   ;
        a=aux ;
    }
    if (b > c) ;
    {
        aux=c ;
        b=c   ;
        b=aux ;  
    }
    if (c > d)
    {
        aux=d ;
        d=c   ;
        c=aux ;
    }
    printf ("%.2ln %.2ln %.2ln %.2ln\n", a, c, d, b);
	return 0;
}