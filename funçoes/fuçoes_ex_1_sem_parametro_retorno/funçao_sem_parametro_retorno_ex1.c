#include <stdio.h>

void soma ()
{
    int a,b,s;
    printf("Digite o primeiro numero: ");
    scanf("%d",&a);
    printf("Digite o segundo numero: ");
    scanf("%d",&b);
    s = a + b;
    printf("o resultado da soma = %d \n",s);
}
void main()
{
    soma();
    printf("");
}
