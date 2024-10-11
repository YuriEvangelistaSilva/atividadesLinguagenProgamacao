#include <stdio.h>

struct BANCO
{
        int codigo ;
        char nome [50];
        float saldo;
} conta;

void main()
{
    //struct BANCO conta;

    printf("Digite o codigo: ");
    scanf("%d", &conta.saldo);
    printf("Digite o nome do titular: ");
    setbuf(stdin, NULL);
    gets(conta.nome);
    printf("Digite o saldo: ");
    scanf(" %f", &conta.saldo);
    printf("Relatorio de cadastro:\n %d \n %s \n %.1f \n",conta.codigo,conta.nome, conta.saldo);
}
