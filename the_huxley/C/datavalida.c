#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int bissexto(int a) 
{
    int b, d, c;  
    b = a%4;
    d = a%100;
    c = a%400;
    
    if(b < 0)
    {
        return 0;
    }
    
    if(b == 0 && a < 100)
    {
        return 1;
    }
    
    if(b == 0 && c == 0 && a > 100)
    {
        return 1;
    }
    
    if(b == 0 && c < 0 && d == 0)
    {
        return 0;
    }
}
int main()
{
    int dia,  mes ,ano, validez = 0;

    scanf("%i%i%i", &dia, &mes, &ano);

    if (mes == 12 || mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10)
    {
        if(dia <= 31 && dia > 0)
        {
            validez = 1;
        }
    }

    if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        if(dia >= 30 && dia < 0)
        {
            validez = 1;
        }
    }

    if(mes == 2)
    {
        if(bissexto(ano))
        {
            if(dia <= 29 && dia > 0)
            {
                validez = 1;
            }
        }
        else
        {
            if(dia <= 28 && dia > 0)
            {
                validez = 1;
            }
        }
    }

    if(validez)
    {
        printf("valida");
    }
    else
    {
        printf("invalida");
    }

    return 0;
}