#include <stdio.h>

void main()

{
    int t , l, c, numero[3][3][4] = {3,8,1,5,0,2,4,7,2,5,9,3,
                                     7,3,0,2,5,1,9,4,6,9,1,5,
                                     6,3,8,1,2,3,5,2,8,4,0,3};

    for (t = 0; t <= 2;t++){
        printf("\n**** Tabela %d ***\n",t);

        for(l = 0;l <=2; l++){
            printf("\nNumeros da linha %d \n",l);

            for(c = 0;c <= 3; c++){
                printf("nummero [%d][%d][%d] = %d \n", t, l, c, numero[t][l][c]);
            }
        }
    }
}
