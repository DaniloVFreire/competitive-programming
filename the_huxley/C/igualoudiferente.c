#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);

    if ((a == b) && (b == c))
    {
        printf("1");
    }

    if ((a == b) && (b!= c) || (b == c) && (c != a) || (a == c) && (a!= b)) 
    {
        printf("3");
    }

    if ((a != b) && (b!= c))
    {
        printf("2");
    }
    
    return 0;
}