#include <stdio.h>
#include <locale.h>

void main ()
{
    setlocale(LC_ALL,"");
    int cont,vet[10],soma;
    soma=0;

    printf("digite 10 numeros para soma: \n");
    for(cont = 0;cont <=9;cont++)
    {
        scanf("%d", &vet[cont]);
        soma = soma + vet[cont];
    }
    printf("\n o resultado da soma desses numeros é : %d",soma);
}
