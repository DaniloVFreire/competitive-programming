#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int caraoucoroa(int moedas, int num, int cara, int coroa)
{
    if(moedas <= 0)
    {
        return num == abs(cara - coroa);
    }
    else
    {
        int x = caraoucoroa(moedas - 1, num, cara + 1, coroa);
        x += caraoucoroa(moedas - 1, num, cara, coroa + 1);
        return x;
    }
}

int main() 
{   
    int quantmoedas, num;
    scanf("%i%i", &quantmoedas, &num);

    printf("%i\n", caraoucoroa(quantmoedas, num, 0, 0));

	return 0;
}