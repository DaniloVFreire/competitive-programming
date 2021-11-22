#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double velc1, velc2, dist, difvel;
    scanf("%lf%lf%lf", &velc1, &velc2, &dist);

    printf("%.0d minutos", abs((dist / (velc1 - velc2))*60));
	return 0;
}