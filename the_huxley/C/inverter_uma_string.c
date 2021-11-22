#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void imprimir_string_invertida(int contador, char string[])
{
    if(contador < 0)
    {
        return;
    }
    else
    {
        printf("%c", string[contador]);
        imprimir_string_invertida(contador - 1, string);
        return;
    }
}

int main() 
{
    char string[256];

    memset(string, '\0', 255);

    scanf("%s", &string);

    int tamanho_da_string = strlen(string);

    imprimir_string_invertida(tamanho_da_string, string);
	
    return 0;
}