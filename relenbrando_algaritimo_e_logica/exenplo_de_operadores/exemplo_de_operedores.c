#include <stdio.h>
#include <stdbool.h>

void main()
{
    int n1 , n2;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);
    printf("%d - %d = %d \n", n1,n2, n1-n2);
    printf("%d * %d = %d \n ",n1,n2, n1 * n2);
    printf("%d >= %d = %d \n",n1,n2, n1 >= n2);
    printf("%d == %d = %d \n",n1,n2, n1 == n2);
    printf("%d != %d = %d \d",n1,n2, n1 != n2 );
    printf("F e V = %d \n", false && true);
    printf("F ou V = %d \n", false || true);
    printf("nao V = %d \n",!true);
    printf("nao F = %d \n",!false);
}
