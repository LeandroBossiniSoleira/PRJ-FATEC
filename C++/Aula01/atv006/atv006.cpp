#include <stdio.h>

int main()
{
    float sal, nsal;

    printf("Informe seu salario ");
    scanf("%f%*c", &sal);

    nsal = (sal + (sal * 0.05)) - (sal * 0.07) ;

    printf("Seu salario eh %5.2f",nsal);


    getchar();
    return 0;
}
