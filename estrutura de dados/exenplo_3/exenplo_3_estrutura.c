#include <stdio.h>

struct EMPRESA
{
    int codigo;
    char nome[50];
    float salario;
} func[2];

void main ()
{
    //struct EMPRESA func[2]
    int i;

    for(i = 0; i < 2; i++)
    {
        printf ("Digite o codigo: ");
        scanf(" %d", &func[i].codigo);
        printf("Digite o nome do titular: ");
        setbuf(stdin, NULL);
        gets(func[i].nome);
        printf("digite o salario: ");
        scanf(" %f", &func[i].salario);
        printf("Relatorio de cadastro:\n %d \n %s \n %.1f \n", func[i].codigo, func[i].nome, func[i].salario);
        printf("\n");
    }
}
