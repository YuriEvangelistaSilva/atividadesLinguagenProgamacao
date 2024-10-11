#include <stdio.h>

void main()
{
    int a=0,l,c,n[2][2];

    printf("informe os numeros para armazenar na matriz: \n");
    for(l = 0; l <= 2 ; l++)
    {
        for(c=0; c <= 2 ; c++)
        {
            printf("posicao [%d][%d] =", l, c);
            scanf(" %d", &n[l][c]);
            if(n[l][c] % 2 == 0)
            {
                a = a + 1;
            }
        }
    }
    printf("ao todo foram digitados %d numeros pares",a);
}
