#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sit(int a, int contador)
{
    if(a > 1)
    {
        return ( a % 2 )== 0 ?
                 1 + sit(a / 2, contador + 1) 
                 : 1 + sit((a * 3) + 1, contador + 1);

    }
    else
    {
        return 1;
    }
}

int espacoamostral(int a,int b, int val1, int val2, int bom)
{
    if(a > b)
    {
        printf("%i %i %i\n", val1, val2, bom);
    }
    else
    {
        if(sit(a, 1) > bom)
        {
            bom = sit(a, 1);
        }
        
        espacoamostral(a + 1, b, val1, val2, bom);
    }
}

void ciclo()
{
    int val1,  val2;
    if(scanf("%i ", &val1) != EOF)
    {
        scanf("%i", &val2);
        if (val1 < val2)
        {  
            espacoamostral(val1, val2, val1, val2, 0);
        }       
        else
        {
            espacoamostral(val2, val1, val1, val2, 0);
        } 
        ciclo();
    }
    return;
}

int main() 
{   
    ciclo();

	return 0;
}