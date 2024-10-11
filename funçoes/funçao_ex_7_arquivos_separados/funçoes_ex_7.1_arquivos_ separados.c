#include <stdio.h>
#include "funcoes.c"

void main()
{
    inr x,y,r;

    printf("*** Rotina 1 ***\n");
    rotina1();

    printf("*** Rotina 2 ***\n");
    rotina2();

    printf("*** Rotina 3 ***\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &x);

    printf("Digite o segundo numero:");
    scanf("%d", &y);

    r = rotina3(x,y);
    printf("O resultado da subitração = %d",r);
}
