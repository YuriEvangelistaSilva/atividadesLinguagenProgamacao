#include <stdio.h>

void main()
{
    int cont,vet[10];

    for(cont=0;cont<10;cont++)
    {
        printf("Digite o numero da posicao [%d] :",cont);
        scanf("%d", &vet[cont]);
    }
    printf("\n");
    for(cont=0;cont<10;cont++)
    {
        if(vet[cont] >= 50)
        {
            printf("Numero maior que 50: %d encantrado na posicao [%d]\n",vet[cont],cont);
        }

    }

}
