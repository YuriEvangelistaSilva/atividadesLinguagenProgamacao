#include <stdio.h>

void main()
{
    int opcao;
    float valor,total;
    printf("Informe o valor da conpra :");
    scanf("%f", &valor);
    printf("Forma de pagamento : \n [1] a vista \n [2] a prazo 30 dias \n [3] a prazo 60 dias \n Escolha uma popicao (1, 2, 3 ) :");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        total = valor - (valor * 0.10);
        printf("O valor a vista com desconto de 10%% = %0.2f \n", total);
        break;
    case 2:
        total= valor + (valor *0.10);
        printf("O valor a prazo (30 dias ) com acrecimo de 10%% = %0.2f \n ", total);
        break;
    case 3:
        total = valor + (valor * 0.20);
        printf("O valor a prazo (60 dias) com acrecimo de 20%% = %0.2f \n",total);
        break;
    default:
        printf("Opcao invalida \n");
    }
}
