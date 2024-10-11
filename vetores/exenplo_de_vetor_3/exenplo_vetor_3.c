#include <stdio.h>

void main()

{
     char vogal[5];
     int cont, num[5];

     printf("Digite vogais: \n");
     for (cont = 0 ; cont < 5 ;cont++)
     {
         printf("Digite uma vogal na posicao vogal[%d] = ", cont);
         scanf(" %c", &vogal[cont]);
     }
     printf("\nDigitando numeros: \n");
     for (cont = 0 ; cont < 5 ;cont++)
     {
         printf("Digite um numero na posicao num[%d] = ",cont);
         scanf("%d", &num[cont]);
     }
}
