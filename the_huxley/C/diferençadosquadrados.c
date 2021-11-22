#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void checagemdequadrados(int num ,int* ta, int* bom)
{
    if(pow(2,*ta)-pow(2, *bom) == num )
    {
        *ta = pow(2,*ta);
        *bom = pow(2, *bom);
    }
    else
    {
        ++ *ta;
        ++ *bom;
        checagemdequadrados(num, &ta, &bom);
    }
}

void repetidor()
{
    int num, caso = 1, teste = 0;
    scanf("%i", &num);
    if(num !=0)
    {
        checagemdequadrados(num, &caso, &teste);
        printf("%i - %i", caso, teste);
        repetidor();
    }
}

int main() 
{
    repetidor();
	return 0;
}