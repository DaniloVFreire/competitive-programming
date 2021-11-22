#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fcp(int num1)
{
    int num2 = num1;
    if(num1 % num2 && num1!= num2 || num1 == 1)
    {
        return 0;
    }
    else if(num2 == 2)
    {
        return 1;
    }
}

int massscan()
{
    int numerocicilico;

    scanf("%i", &numerocicilico);

    if(numerocicilico != -1)
    {
        printf("%i\n", fcp(numerocicilico));
        massscan();
    }
    else
    {
        return 0;
    }
}

int main() 
{
    massscan();

	return 0;
}