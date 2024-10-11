#include <stdio.h>

void main()

{
    char vogal[5] = {'a','e','i','o','u'};
    int cont, num[5] = {4,7,2,5,3};

    printf("Mostrando todas as vogais: \n");
    for(cont = 0;cont <= 4;cont++)
    {
          printf("Vogal[%d] = %c \n ",cont, vogal[cont]);
    }
    printf("\n Mostrando todos os numeros: \n");
    for(cont=0;cont<=4;cont++)
    {
        printf("Num[%d] = %d \n", cont, num[cont]);
    }
}
