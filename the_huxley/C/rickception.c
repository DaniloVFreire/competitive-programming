#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int maistres(int inicial1,int contagem1)
{
    if(contagem1 >1)
    {
        inicial1 = inicial1 + 3;

        -- contagem1;

        return rpc(inicial1,contagem1);
    }

    else
    {
        return inicial1;
    }
}

int rpc(int inicial2,int contagem2)
{
if(contagem2 >1)
    {
        inicial2 = inicial2 + (inicial2 % 5);

        -- contagem2;

        return maistres(inicial2,contagem2);
    }

    else
    {
        return inicial2;
    }    
}

int main()
{
    int inicial, contagem;

    scanf("%i %i", &inicial, &contagem);

    printf("%i", maistres(inicial, contagem));

    return 0;
}
