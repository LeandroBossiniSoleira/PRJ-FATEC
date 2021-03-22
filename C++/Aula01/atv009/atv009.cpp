#include <stdio.h>
#include <math.h>

int main(){

    float base, alt, res;

    printf("Informe a base ");
    scanf("%f%*c", &base);
    printf("Informe a altura ");
    scanf("%f%*c", &alt);
    res =(base * alt) / 2;

    printf("A area do triangulo retangulo eh %5.2f ",res);
    getchar();
    return 0;


}
