#include <stdio.h>

float salario(float x)
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

    return s;
}

void main()
{
    float r,y;

    printf("Digite o salario:");
    scanf(" %f",&y);
    r = salario(y);
    printf("O novo salario = %.2f",r);
}
