#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int nota_com_maior_frequencia(int contador, int notas[], int maior_frequencia, int nota_com_maior_frequenciaa)
{
    if(contador > 10)
    {
        return nota_com_maior_frequenciaa;
    }
    else
    {
        if(notas[contador] > maior_frequencia)
        {
            maior_frequencia = notas[contador];

            nota_com_maior_frequenciaa = contador;
        }
        nota_com_maior_frequencia(1 + contador, notas, maior_frequencia, nota_com_maior_frequenciaa);
    }
}

int checagem_de_gabarito(int contador, char gabarito[], char respostas[])
{
    if(contador >= 10)
    {
        return 0;
    }
    else
    {
        return (respostas[contador] == gabarito[contador])
               ? 1 + checagem_de_gabarito(contador + 1, gabarito, respostas)
               : checagem_de_gabarito(contador + 1, gabarito, respostas);
    }
}

void correcao(int notas[], char gabarito[], int numero_de_alunos, int alunos_aprovados)
{
    int numero_do_aluno;
    scanf("%i ", &numero_do_aluno);

    if(numero_do_aluno == 9999)
    {
        printf("%.1lf%%\n", (((alunos_aprovados * 1.00) / (numero_de_alunos * 1.00)) * 100));

        printf("%i.0\n", nota_com_maior_frequencia(0, notas, 0, 0));
        return;
    }
    else
    {
        char respostas[10];
        scanf("%[^\n]s", respostas);
        int nota_do_aluno = checagem_de_gabarito(0, gabarito, respostas);

        if(nota_do_aluno >= 6)
        {
            alunos_aprovados += 1;
        }

        notas[nota_do_aluno] += 1;

        printf("%i %.1lf\n", numero_do_aluno, (nota_do_aluno * 1.00));
        correcao(notas, gabarito, numero_do_aluno, alunos_aprovados);
    }   
}

int main() 
{
    char gabarito[10];
    int notas[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    scanf("%[^\n]s", gabarito);

    correcao(notas, gabarito, 0, 0);
    
	return 0;
}