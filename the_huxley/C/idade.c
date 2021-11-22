#include <stdio.h>

int main()
{
    int ano, idade;

    printf("quando você nasceu?\n");

    scanf("%i", &ano);

    idade = 2019 - ano ;

    printf("sua idade é aproximadamente:%d \n", idade);

    return 0;
}
