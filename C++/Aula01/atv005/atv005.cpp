#include <stdio.h>

int main()
{
    float sal, aum, nsal;

    printf("Informe seu salario ");
    scanf("%f%*c", &sal);
    printf("Informe o a quantidade de aumento ");
    scanf("%f%*c", &aum);

    nsal = sal + (sal * (aum / 100));

    printf("Seu novo salario eh %5.2f",nsal);
    getchar();
    return 0;
}
