#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void resto(int val1, int val2)
{
    if(val1 < val2)
    {
        if(val1 % 5 == 2 || val1 % 5 == 3)
        {
            printf("%i\n", val1);
        }

        resto(val1 + 1, val2);
    }
}

int main() 
{
    int val1, val2;
    scanf("%i %i", &val1, &val2);
    if(val1 < val2)
    {
        resto(val1 + 1, val2);
    }
    else
    {
        resto(val2 + 1, val1);
    }
	return 0;
}