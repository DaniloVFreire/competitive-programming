#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double cotacao_do_dollar, aliquota, valor_do_produto, valor_do_frete;
    scanf("%lf%lf%lf%lf", &cotacao_do_dollar, &aliquota, &valor_do_produto, &valor_do_frete);
    
    double frete_reais = valor_do_frete * cotacao_do_dollar ;
    double produto_reais = valor_do_produto * cotacao_do_dollar ;
    double valor_total = frete_reais + produto_reais ;


    printf("%.2lf\n", cotacao_do_dollar);
    printf("%.2lf\n", produto_reais);
    printf("%.2lf\n", frete_reais);
    printf("%.2lf\n", valor_total);

    if (valor_do_produto >= 2500)
    {
            double valor_total2 = produto_reais ;
            double valor_impostos = valor_total2 * 0.6 ;
            double valor_final = (valor_total2 + valor_impostos) / (1 - (aliquota/100));
            double icms = (valor_final * aliquota) / 100 ;
            double impostos_finais = icms + valor_impostos ;
            double valor_final_secundario = impostos_finais + valor_total ;
    
            
            printf("%.2lf\n", valor_impostos);
            printf("%.2lf\n", icms);
            printf("%.2lf\n", impostos_finais);
            printf("%.2lf\n", valor_final_secundario);
            printf("Impostos calculados sem o frete\n");
    }
    else 
    {
            double valor_impostos = valor_total * 0.6 ;
            double valor_final = (valor_total + valor_impostos) / (1 - (aliquota/100));
            double icms = (valor_final * aliquota) / 100 ;
            double impostos_finais = icms + valor_impostos ;
    
            printf("%.2lf\n", valor_impostos);
            printf("%.2lf\n", icms);
            printf("%.2lf\n", impostos_finais);
            printf("%.2lf\n", valor_final);
            printf("Impostos calculados com o frete\n");
    }
	return 0;
}