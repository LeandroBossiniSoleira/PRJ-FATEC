#include <stdio.h>

int main()
{
    float n1, n2, n3, peso1, peso2, peso3, mp;

    printf("Informe a nota 1 ");
    scanf("%f%*c", &n1);
    printf("Informe a nota 2 ");
    scanf("%f%*c", &n2);
    printf("Informe a nota 3 ");
    scanf("%f%*c", &n3);
    printf("Informe o peso da nota 1 ");
    scanf("%f%*c", &peso1);
    printf("Informe o peso da nota 2 ");
    scanf("%f%*c", &peso2);
    printf("Informe o peso da nota 3 ");
    scanf("%f%*c", &peso3);

    mp = ((n1 * peso1) + (n2 * peso2) + (n3 * peso3)) / (peso1 + peso2 + peso3);

    printf("A media ponderada eh %f", mp);


    getchar();
    return 0;

}
