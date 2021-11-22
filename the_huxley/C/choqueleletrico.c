#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	float level, W;

    scanf("%f", &level);

    if(level <= 20)
    {
        W = pow(level, 3) + 20;
    }

    if (level >20 && level <= 40)
    {
        W = pow(level - 10, 2) + 8000;
    }

    if (level>40 && level<=60)
    {
        W = 9000 +(level * 5);
    }
    
    if (level > 60 && level <= 80)
    {
        W = 9300 + (2 * level);
    }

    if (level > 80 && level < 100)
    {
        W = 9500 + level;
    }
    
    printf("Potencia de : %.0f W", W);

    return 0;
}