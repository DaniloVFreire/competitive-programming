#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ciclo(int pessoas, double valorfinal)
{
    int convidados;
    scanf("%i", &convidados);
    if(convidados >= 0)
    {
        ++pessoas;
        if (convidados >= 25)
        {
            convidados = 25;
            pessoas += convidados;
        }
        else if(convidados <= 15)
        {
            pessoas += convidados;
            convidados = 15;
        }
        else if(convidados > 15 && convidados < 25)
        {
            pessoas += convidados;
        }
        valorfinal += (convidados - 15) * 42;
        ciclo(pessoas, valorfinal);
    }
    else
    {
        printf("%.2lf\n", valorfinal);
        printf("%i\n", pessoas);
    }

}

int main() 
{
    ciclo(0,0);
	return 0;
}