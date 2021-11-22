#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double feito, total , porcentagem;

    scanf("%lf %lf", &total, &feito);

    porcentagem =  (100 * feito)/total;

    if(feito <= total * 0.2)
    {
        printf("%.2lf%% 4.40%% Pessimo", porcentagem);
    }
    
    if(feito > total * 0.2 && feito <= total* 0.4)
    {
        printf("%.2lf%% 31.65%% Ruim", porcentagem);        
    }

    if(feito > total * 0.4 && feito <= total * 0.6)
    {
        printf("%.2lf%% 56.82%% Bom", porcentagem);        
    }

    if(feito > total * 0.6 && feito < total * 0.8)
    {
        printf("%.2lf%% 80.00%% Muito Bom", porcentagem);                
    }

    if(feito >= total * 0.8)
    {
        printf("%.2lf%% 94.00%% Excelente", porcentagem);        

    }
    return 0;
}