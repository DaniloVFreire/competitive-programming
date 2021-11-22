#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double a, b, c, r;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    r = ( (a * 2) + (b * 3) + (c * 5))/10;

    printf("MEDIA = %.1lf", r);
    
    return 0;
}