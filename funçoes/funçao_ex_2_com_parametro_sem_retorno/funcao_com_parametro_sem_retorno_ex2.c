#include <stdio.h>
void soma(int x,int y)
{
    int s;
    s= x + y;
    printf("o resultado da soma = %d\n",s);
    printf("");
}

void main()
{
    int a,b;
    printf("Digite o primeiro numero: ");
    scanf("%d",&a);
    printf("Digite o segundo numero: ");
    scanf("%d",&b);
    soma(a,b);
}
