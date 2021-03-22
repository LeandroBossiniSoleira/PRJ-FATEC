#include<stdio.h>
int main ()
{
    float hora_t,vlr_sal_min,vlr_hora_t,vlr_sal_bru,imposto,vlr_sal_imposto,vlr_sal_liq;
    printf("Digite o numero de horas trabalhada \t");
    scanf("%f%*c",&hora_t);
    printf("Digite o valor do salario minimo\t");
    scanf("%f%*c",&vlr_sal_min);
    vlr_hora_t = vlr_sal_min / 2;
    vlr_sal_bru = vlr_hora_t * vlr_sal_min;
    imposto = vlr_sal_bru * 0.03;
    vlr_sal_liq = vlr_sal_bru - imposto;

    printf("valor da hora trabalhada %f\n",vlr_hora_t);
    printf ("salario bruto %f\n",vlr_sal_bru);
    printf("salario final ou salario liquido %f\n",vlr_sal_liq);
    printf("imposto %f\n",imposto);

    getchar();
    return 0;
}
