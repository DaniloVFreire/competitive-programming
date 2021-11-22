#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double salarioantigo, salarionovo, aumento;

    scanf("%lf", &salarioantigo);
    
    if(salarioantigo <= 280)
    {
        salarionovo = salarioantigo * 1.20;

        aumento = salarionovo - salarioantigo;

        printf("%.2lf\n", salarioantigo);
        printf("20\n");
        printf("%.2lf\n", aumento);
        printf("%.2lf", salarionovo);
    }
    
    if( 700 >= salarioantigo && salarioantigo > 280)
    {
        salarionovo = salarioantigo * 1.15;

        aumento = salarionovo - salarioantigo;

        printf("%.2lf\n", salarioantigo);
        printf("15\n");
        printf("%.2lf\n", aumento);
        printf("%.2lf", salarionovo);
    }

    if( 1500 > salarioantigo && salarioantigo > 700)
    {
        salarionovo = salarioantigo * 1.1;

        aumento = salarionovo - salarioantigo;

        printf("%.2lf\n", salarioantigo);
        printf("10\n");
        printf("%.2lf\n", aumento);
        printf("%.2lf", salarionovo);
    }

    if( salarioantigo >= 1500)
    {
        salarionovo = salarioantigo * 1.05;
        
        aumento = salarionovo - salarioantigo;

        printf("%.2lf\n", salarioantigo);
        printf("5\n");
        printf("%.2lf\n", aumento);
        printf("%.2lf", salarionovo);
    }
	return 0;
}