#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == b && b == c)
    {
        printf("equilatero");
    }

    if( (a == b && b != c) || (b == c && c != a) || (c == a && a!= b) )
    {
        printf("isosceles");
    }

    if(a != b && b != c && a != c)
    {
        printf("escaleno");
    }
    
    return 0;
}