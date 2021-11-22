#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int contador, funcao;
    double saldo = 0, debitos = 0, creditos = 0, valor;
    for ( contador = 98 ; contador >= 0 ; --contador )
    {
        scanf("%i%lf", &funcao, &valor);
        if(funcao == 1)
        {
            saldo +=valor;
            creditos += valor;
        }//credito
        else if(funcao == -1)
        {
            contador = -1;
        }
        else
        {
            saldo -= valor;
            debitos += valor;
        }//debito
    }
    printf("Creditos: R$ %.2lf\n", creditos);
    printf("Debitos: R$ %.2lf\n", debitos);
    printf("Saldo: R$ %.2lf\n", saldo);

	return 0;
}