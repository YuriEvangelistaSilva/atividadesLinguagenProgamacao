#include <stdio.h>

void main()
{
    int a=0,l,c,n[2][2];

    printf("preencha a tabela \n");
    for(l = 0; l <= 1 ; l++)
    {
        for(c=0; c <= 1 ; c++)
        {
            printf("posicao [%d][%d] =", l, c);
            scanf(" %d", &n[l][c]);
            a = a + n[l][c];
        }
    }
    printf("o resultado da soma e %d",a);
}
