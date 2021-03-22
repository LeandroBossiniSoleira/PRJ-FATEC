#include <stdio.h>
#include <math.h>
int main()
{
    int n1,n2,n3,n4,soma;

    printf("Informe o primeiro numero");
    scanf("%d%*c", &n1);
    printf("Informe o primeiro numero");
    scanf("%d%*c", &n2);
    printf("Informe o primeiro numero");
    scanf("%d%*c", &n3);
    printf("Informe o primeiro numero");
    scanf("%d%*c", &n4);

    soma = n1 + n2 + n3 + n4;

    printf("O resultado da soma eh %d",soma);
    getchar();
    return 0;
}
