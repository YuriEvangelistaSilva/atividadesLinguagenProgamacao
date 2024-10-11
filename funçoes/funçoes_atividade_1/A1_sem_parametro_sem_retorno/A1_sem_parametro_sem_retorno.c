#include <stdio.h>

void salario()
{
    float salario,r;

    printf("Digite o salario:");
    scanf(" %f",&salario);

    if(salario >= 1000)
    {
        r = salario * 1.10 ;
    }
    else
    {
        r = 100 * 1.05;
    }

    printf("O novo salario = %.2f", r);
}

void main()
{
    salario();
}
