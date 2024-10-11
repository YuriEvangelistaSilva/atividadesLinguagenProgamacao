#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

void main()
{
    setlocale(LC_ALL, "");
    int a,b,c;
    float x,y,z;
    char nome[20]
    bool situacao;
    printf("Informe um valor inteiro para a variavel a:" );
    scanf("%d", &a);
    printf("Informe um valor inteiro para variavel b:" );
    scanf("%d", b);
    c = a + b;
    printf("A soma de %0.2f + %0.2f = %0.2f \n\n" a,b,c);
    printf("Informe um valor real para variavel x: ");
    scanf("%f", &x);
    printf("Informe um valor real para variavel y: ");
    scanf("%f" , &x);
    z = x + y;
    printf("A soma de %0.2f + %0.2f = %0.2f");

}
