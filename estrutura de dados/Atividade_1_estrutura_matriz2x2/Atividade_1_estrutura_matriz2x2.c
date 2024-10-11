#include <stdio.h>

struct LIVROS
{
    int codigo;
    char titulo[50];
    float valor;
} func[2][2];

void main()
{
    int i,j;

    for(i = 0;i <=1 ;i++)
    {
        for(j = 0;j <= 1; j++)
        {
            printf("Digote o codigo: ");
            scanf("%d", & func[i][j].codigo);
            printf("Digite o titulo:");
            setbuf(stdin, NULL);
            gets(func[i][j].titulo);
            printf("Digite o valor:");
            scanf("%f", &func[i][j].valor);
            printf("\n");
        }
    }
    printf("Relatorio do cadastro\n");
    for(i = 0;i <= 1;i++)
    {
        for(j = 0;j <= 1;j++)
        {
            printf("%d      %s      %.2f \n",func[i][j].codigo,func[i][j].titulo,func[i][j].valor );
        }
    }
}
