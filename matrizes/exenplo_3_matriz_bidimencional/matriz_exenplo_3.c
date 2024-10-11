#include <stdio.h>

void main()
{
    int i, c,n[3][4] = {3,8,1,5,0,2,4,7,2,5,9,3};

    for(i = 0;i <=2;i++)
    {
        printf("\nNumeros da linha %d \n", i);

        for(c = 0; c <=3 ;c++ )
        {
            printf("numero[%d][%d] = %d \n", i,c,n[i][c]);
        }
    }
}
