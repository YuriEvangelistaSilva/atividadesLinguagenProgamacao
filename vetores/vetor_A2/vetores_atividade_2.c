#include <stdio.h>

void main()

{
    int cont,vetor1[5],vetor2[5];

    printf("digite numeros dos vetores\n");
    for(cont=0;cont <5;cont++)
    {
        printf("\nVetor 1 - numero na posicao [%d]:",cont);
        scanf(" %d",&vetor1[cont]);

        printf("Vetor 2 - numero na posicao [%d]:",cont);
        scanf(" %d",&vetor2[cont]);
    }
     printf("\nVetor resultado:\n");
    for(cont=0;cont<6;cont++)
    {
        printf(" %d ",vetor1[cont] + vetor2[cont]);
    }
}
