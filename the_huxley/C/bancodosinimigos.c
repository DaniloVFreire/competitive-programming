#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct banco_dos_inimigos
{
    char nome[20];
    int id;
    int level;
    int vida;
    int ataque;
    int defesa;
};


int main() 
{
    int quantidade_de_inimigos, contador;
    scanf("%i", &quantidade_de_inimigos);

    struct banco_dos_inimigos inimigos[quantidade_de_inimigos];

    for( contador = 0 ; contador < quantidade_de_inimigos ; ++contador )
    {
        scanf(" %[^\n]s", inimigos[contador].nome);
        scanf("%i", &inimigos[contador].id);
        scanf("%i", &inimigos[contador].level);
        scanf("%i", &inimigos[contador].vida);
        scanf("%i", &inimigos[contador].ataque);
        scanf("%i", &inimigos[contador].defesa);
    }

    for( contador = 0 ; contador < quantidade_de_inimigos ; ++contador )
    {
        printf("Nome: %s\n", inimigos[contador].nome);
        printf("ID: %i\n", inimigos[contador].id);
        printf("Level: %i\n", inimigos[contador].level);
        printf("Vida: %i\n", inimigos[contador].vida);
        printf("Ataque: %i\n", inimigos[contador].ataque);
        printf("Defesa: %i\n", inimigos[contador].defesa);
    }

	return 0;
}