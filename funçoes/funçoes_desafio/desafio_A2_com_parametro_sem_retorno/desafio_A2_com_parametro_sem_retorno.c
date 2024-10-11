#include <stdio.h>

void soma(int y[5])
{
    int s=0,x;

    for(x = 0; x < 5; x++)
    {
        s = s + y[x];
    }
    printf("O resultado da soma e %d",s);
}

void main()
{
    int c,v[5];

    for(c=0;c < 5;c++)
    {
        printf("digite um numero para soma:");
        scanf(" %d",&v[c]);
    }
    soma(v);
}
