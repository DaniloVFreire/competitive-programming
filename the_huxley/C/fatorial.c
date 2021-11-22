#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fatorial(int num1)
{
    int res;
    if (num1 > 0)
    {
    return num1 * fatorial(num1-1);
    }

    else
    {
        return 1;
    }
}

int mscan()
{
    int fatcicle;

    scanf("%i", &fatcicle);

    if(fatcicle != -1)
    {
        printf("%i\n", fatorial(fatcicle));
        mscan();
    }
    else
    {
        return 0;
    }
}

int main() 
{
    mscan();
	return 0;
}