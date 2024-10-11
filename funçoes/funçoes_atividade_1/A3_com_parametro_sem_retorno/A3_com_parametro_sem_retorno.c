#include <stdio.h>

void salario(float x)
{
    float s;

    if(x >= 1000)
    {
        s = x * 1.10 ;
    }
    else
    {
        s = 100 * 1.05 ;
    }

        printf("O novo salario = %.2f",s);
}

void main()
{
    float r;

    printf("Digite o salario:");
    scanf(" %f",&r);
    salario(r);
}
