#include <stdio.h>

void main()
{
    int l, c, n[3][2];

    printf(" Preencher matrizes bidimensionais *** \n\n");
    for(l = 0;l <= 2;l++){
        for(c = 0; c <= 1;c++){
            printf("Posicao [%d][%d] = ",l,c);
            scanf("%d", &n[l][c]);
        }
    }

    printf("\n*** Apresentando matriz bidimencional ***\n\n");
    for(l = 0;l <= 2;l++){
        for(c = 0;c <= 1;c++){
            printf("numero[%d][%d] = %d \n", l, c, n[l][c]);
        }
    }
}
