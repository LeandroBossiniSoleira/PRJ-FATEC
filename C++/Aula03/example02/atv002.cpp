#include<stdio.h>
#include<math.h>
int main()
{
   float nl, pi, pf, arr;

   printf("digite um numero:\t");
   scanf("%f%*c",&nl);

   pf = modf(nl,&pi);
   arr = ceil(nl);

   printf("Com o numero %f temos:\n", nl);
   printf("A parte inteira: %f\n", pi);
   printf("A parte francionaria: %f\n", pf);
   printf("O arredondamento:%f\n",arr);


   return 0
}
