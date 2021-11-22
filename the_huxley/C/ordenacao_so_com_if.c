#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, c, d, aux;{
    scanf("%lf %lf %lf %lf\n", &a, &b, &c, &d) ;}
    if (a > b) ;
    {
        aux = b ;
        b = a   ;
        a = aux ;
    }
    if (a > c) ;
    {
        aux = c ;
        c = a   ;
        a = aux ;
    }
    if (a > d) ;
    {
        aux = d ;
        d = a   ;
        a = aux ;
    }
     if (b > c) ;
    {
        aux = c ;
        c = b   ;
        b = aux ;  
    }
    if (b > d) ;
    {
        aux = d ;
        d = b   ;
        b = aux ;  
    }
    if (c > d)
    {
        aux = d ;
        d = c   ;
        c = aux ;
    }
    printf("%.2lf %.2lf %.2lf %.2lf\n", a, c, d, b);
    return 0;
}