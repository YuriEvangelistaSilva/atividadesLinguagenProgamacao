#include <stdio.h>

struct NOTA
{
    char nome[50];
    float MD,NM,NP;
}aluno[2];

void main()
{
    int i;

    for(i=0;i<=2;i++)
    {
        printf("Digite o nome do aluno %d" ,i);
        setbuf(stdin, NULL);
        gets(aluno.nome[i]);
        printf("Nota de portugues:");
        scanf("%d", &aluno.NP[1]);
        printf("Nota de matematica:");
        scanf("%d", &aluno.NM[i]);
        aluno.MD = aluno.NP + aluno.NM /2;
    }
    for(i=0;i<=2;i++)
    {
        printf("Aluno %d \n nome: %s\n media:%f",i,aluno.nome,aluno.MD);
    }
}
