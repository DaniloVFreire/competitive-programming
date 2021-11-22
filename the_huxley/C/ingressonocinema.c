#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%i", &a) ;
    scanf("%i", &b) ;

    if ((a == 1) || (b == 1)) 
    {
    printf("1");
    }

     if (a == 0 && b == 0) 
    {
    printf("0");
    }

    return 0;
}