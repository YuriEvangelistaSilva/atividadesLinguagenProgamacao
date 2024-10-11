#include <stdio.h>

float salario()
{
    float x,s;

    printf("Digite o salario:");
    scanf(" %f",&x);

    if(x >= 1000)
    {
        s = x * 1.10 ;
    }
    else
    {
        s = 100 * 1.05 ;
    }

    return s;
}

void main()
{
    float r;
    r = salario();
    printf("O novo salario = %.2f",r);
}
