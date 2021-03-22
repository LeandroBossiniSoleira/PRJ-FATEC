#include <stdio.h>


int main()
{
    float sal, nsal;

    printf("Informe seu salario ");
    scanf("%f%*c", &sal);

    nsal = (sal + 50) - (sal * 0.1) ;

    printf("Seu salario eh %5.2f",nsal);
    getchar();
    return 0;
}
