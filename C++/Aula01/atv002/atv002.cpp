#include <stdio.h>

int main()
{
    int n1, n2, n3, media;

    printf("Informe o primeiro numero ");
    scanf("%d%*c", &n1);
    printf("Informe o segundo numero ");
    scanf("%d%*c", &n2);
    printf("Informe o terceiro numero ");
    scanf("%d%*c", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("a media eh %d ",media);
    getchar();
    return 0;
}
