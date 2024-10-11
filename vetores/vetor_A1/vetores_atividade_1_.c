#include <stdio.h>

void main()

{
    int cont,n1[5],n2[5];

    printf("digite numeros dos vetores\n");
    for(cont=0;cont<=4;cont++)
    {
        printf("\nVetor 1 - numero na posicao [%d]:",cont);
        scanf("%d" ,&n1[cont]);

        printf("Vetor 2 - numero na posicao [%d]:",cont);
        scanf("%d" ,&n2[cont]);
    }
    printf("\nVetor intercalado:\n");
    for(cont=0;cont<=4;cont++)
    {
    printf(" %d %d",n1[cont],n2[cont]);
    }
}
