#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct passageiros
{
    char data[10];
    char de[20];
    char para[20];
    char horario;
    int poltrona;
    int idade;
    char nome[20]
}p;

int banco (int dados[], int contador)
{
    int num_da_passagem;
    scanf("%i", num_da_passagem);
    if (num_da_passagem == -1)
    {
        return contador;
    }
    else
    {
        scanf(" %[^\n]s", dados[contador].data);
        scanf(" %[^\n]s", dados[contador].de);
        scanf(" %[^\n]s", dados[contador].para);
        scanf(" %[^\n]s", dados[contador].horario);
        scanf("%i", &dados[contador].poltrona);
        scanf("%i", &dados[contador].idade);
        scanf(" %[^\n]s", dados[contador].nome);
    }
}

int main() 
{
    p p[1000];
    int quant_de_pess = banco(p, 0);

	return 0;
}