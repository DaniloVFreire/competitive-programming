#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int scan_loop_maior_numero(int num)
{
    int numero_da_vez;

    scanf("%i", &numero_da_vez);

    if(numero_da_vez == 0)
    {
        return num;
    }
    else
    {
        if(num < numero_da_vez)
        {
            num = numero_da_vez;
        }
        scan_loop_maior_numero(num);
    }
}

int main() 
{
    printf("%i", scan_loop_maior_numero(0));

	return 0;
}