#include <stdio.h>

int soma ()
{
    int x,y,s;
    printf("Digite o primeiro numero: ");
    scanf("%d",&x);
    printf("Digite o segundo numero: ");
    scanf("%d",&y);
    s = x + y;
    return s;
}

void main()
{
    int r;
    r = soma();
    printf("o resultado da soma = %d \n",r);
}
