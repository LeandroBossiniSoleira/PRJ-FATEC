#include <stdio.h>

int main(){

    float raio, ac;

    printf("Informe o raio ");
    scanf("%f%*c", &raio);
    ac = 3.141592 * (raio * raio);

    printf("A area do circulo eh %.2f ", ac);
    getchar();
    return 0;


}
