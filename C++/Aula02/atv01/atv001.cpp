#include <stdio.h>
#include <math.h>

    int main(){
    float n1;

    printf("Digite um numero: ");
    scanf("%f%*c", &n1);

    if (n1 > 0){
            float n1q ,n1c ,n1rq ,n1rc;
            n1q = pow (n1,2);
            n1c = pow (n1,3);
            n1rq = sqrt (n1);
            n1rc = cbrt (n1);
    printf("O valor das operacoes (n^2, n^3, raiz2(n), raiz3(n)) de %f, sao:\n", n1);

        printf("A-numero ao quadrado:%f\n",n1q);
        printf("B-numero ao cubo:%f\n",n1c);
        printf("C-)raiz quadrada:%f\n",n1rq);
        printf("D-)raiz cubica:%f\n",n1rc);

    }else {
        printf("Coloque um numero positivo");

}

                return 0;

}



