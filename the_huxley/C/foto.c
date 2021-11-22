#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double a, b, c, d, aux;
    scanf("%lf", &a) ;
    scanf("%lf", &b) ;
    scanf("%lf", &c) ;
    scanf("%lf", &d) ;
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
    if (a > d) 
    {
        aux = a;
        a = d  ;
        d = aux;
    }
     if (b > c) 
   {
        aux = b;
        b = c  ;
        c = aux;
    }
    if (b > d) 
   {
        aux = b;
        b = d  ;
        d = aux;
    }
    if (c > d)
    {
        aux = c ;
        c = d   ;
        d = aux ;
    }
    printf("%.2lf\n", a);
    printf("%.2lf\n", c);
    printf("%.2lf\n", d);
    printf("%.2lf\n", b);
    return 0;
}