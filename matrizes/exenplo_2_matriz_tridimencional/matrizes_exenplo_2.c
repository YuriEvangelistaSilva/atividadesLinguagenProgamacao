#include <stdio.h>

void main()
{
    int numero[3][3][4] = {3,8,1,5,0,2,4,7,2,5,9,3,
                           7,3,0,2,5,1,9,4,6,9,1,5,
                           6,3,8,1,2,3,5,2,8,4,0,3};

    printf("numero [0][0][0] = %d \n", numero[0][0][0]);
    printf("numero [1][2][1] = %d \n", numero[1][2][1]);
    printf("numero [2][1][3] = %d \n", numero[2][1][3]);
}
