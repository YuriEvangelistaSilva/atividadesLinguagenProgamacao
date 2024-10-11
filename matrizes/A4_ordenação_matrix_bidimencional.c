#include <stdio.h>

void main()
{
    int l,c,m[2][2],aux,l2,c2;

    for(l=0 ; l<=1 ; l++)
    {
        for(c = 0; c <= 1; c++)
        {
            printf("digite os numeros das posicoes [%d][%d] = ", l, c);
            scanf("%d", &m[l][c]);
        }
    }

    printf("matrix ordenada: \n");

    for(l=0; l<=1; l++)
    {
        for(l2=0; l2<=1; l2++)
        {
            for(c=0; c<=1; c++)
            {
                for(c2=0; c2<=1; c2++)
                {
                    if(m[l][c] < m[l2][c2])
                    {
                        aux = m[l][c];
                        m[l][c] = m[l2][c2];
                        m[l2][c2] = aux;
                    }
                }
            }
        }
    }
    for(l=0 ; l<=1 ; l++)
    {
        for(c = 0; c <= 1; c++)
        {
            printf("%d ",m[l][c]);
        }
    }
}
