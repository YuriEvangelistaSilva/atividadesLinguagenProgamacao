#include <stdio.h>

void main()
{
    int n,vet[5],cont;
    n=4;

    printf("digite uma ordem de numeros: \n");
    for(cont = 0;cont <= 4;cont++)
    {
        scanf(" %d", &vet[cont]);
    }

    printf("ordem inver�a \n");
    for(n; n >=0 ;n--)
    {
        printf(" %d",vet[n]);
    }
}
