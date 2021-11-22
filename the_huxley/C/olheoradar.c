#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double velocidadedoautomovel, velocidadedavia;

    scanf("%lf", &velocidadedavia);
    scanf("%lf", &velocidadedoautomovel);    

    if (velocidadedoautomovel <= (velocidadedavia * 1.2) && velocidadedoautomovel > velocidadedavia)
    {
        printf("85.13\n4");
    }

    if (velocidadedoautomovel <= velocidadedavia)
    {
        printf("0.00\n0");
    }

    if (velocidadedoautomovel > (velocidadedavia * 1.2) && velocidadedoautomovel <= (velocidadedavia * 1.5))
    {
        printf("127.69\n5");
    }
    
    if (velocidadedoautomovel > (velocidadedavia * 1.5))
    {
        printf("574.62\n7");
    }
    
	return 0;
}