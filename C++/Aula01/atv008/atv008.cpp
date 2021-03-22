#include <stdio.h>

int main()
{
    float dep, juros, depr, tdepr;

    printf("Informe o valor para deposito ");
    scanf("%f%*c", &dep);
    printf("Informe o juros ");
    scanf("%f%*c", &juros);

    depr = dep * (juros / 100);
    tdepr = dep + depr ;

    printf("O valor de rendimento eh de %5.2f \n",depr);
    printf("O valor apos o rendimento eh de %5.2f ",tdepr);

    getchar();
    return 0;
}
