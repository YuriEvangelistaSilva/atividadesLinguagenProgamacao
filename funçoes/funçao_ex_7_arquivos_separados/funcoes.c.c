#include <stdio.h>

int x,y,m,s;

void rotina1()
{
    printf("mostrando essa menssagem \n\n");
}

void rotina2()
{
     printf("Digite o primeiro numero: ");
    scanf("%d", &x);
    printf("Digite o segundo numero: ");
    scanf("%d", &y);
    m = x * y;
    printf("o resultado da multiplicaçao = %d \n\n", m);
}

int rotina3(int x, int y)
{
    s= x - y;
    return s;
}
