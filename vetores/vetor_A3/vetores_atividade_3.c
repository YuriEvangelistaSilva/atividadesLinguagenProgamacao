#include <stdio.h>

void main()
{
    int cont,v1[5];

    for(cont=0;cont <5;cont++)
    {
        printf("Digite o numero numero da [%d] posicao:",cont);
        scanf(" %d",&v1[cont]);
    }
    printf("%d %d %d %d %d",v1[2],v1[4],v1[1],v1[3],v1[0]);
}
