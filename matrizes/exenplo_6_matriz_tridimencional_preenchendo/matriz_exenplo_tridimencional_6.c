#include <stdio.h>

void main()
{
    int t, l, c, n[2][3][2];

    printf("*** Preencher matriz tridimencional ***\n\n");
    for(t = 0;t<=1;t++){
        printf("\n*** Tabela %d ***\n", t);
        for(l=0;l<=2;l++){
            for(c=0;c<=1;c++){
                printf("Posicao [%d][%d][%d] = ", t,l,c);
                scanf("%d", &n[t][l][c]);
            }
        }
    }

    printf("\n*** Apresentando matriz tridimencional ***\n\n");
    for(t=0;t <=1;t++){
        printf("\n*** Tabela %d ***\n\n", t);
        for(l=0;l<=2;l++){
            for(c=0;c<=1;c++){
                printf("numero[%d][%d][%d] = %d \n", t, l ,c, n[t][l][c]);
            }
        }
    }
}
