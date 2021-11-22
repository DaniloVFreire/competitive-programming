#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double a, b, c, r1, r2, delta;

    scanf("%lf", &a);
    scanf("%lf", &b);    
    scanf("%lf", &c);  

    delta = (b * b) - 4 * a * c;


    r1 = (delta - b)/ 2 * a;

    r2 = (- delta - b)/ 2 * a;

    if(a != 0)
    {
        if (delta < 0 )
        {
            printf("NRR");
        }

        else
        {
            printf("%.2lf\n", r1);
            printf("%.2lf", r2);
        }
    }
    
    else
    {
       printf("NEESG"); 
    }
    
    

	return 0;
}