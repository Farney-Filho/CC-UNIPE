#include <stdio.h>
//DAVI CARNEIRO - PROVA 1 LDA CC P2 NOITE
int main()
{
    float num[10], soma, media;
    int num30=0, maiorMedia=0, igualMedia=0;

    for (int i=0; i<10; i++)
    {
        printf("Digite o %d numero: ",i+1);
        scanf("%f", &num[i]);

        if (num[i]==30)
        {
            num30++;
        }
        soma = soma + num[i];
    }

        media = soma/10;

    for (int i=0; i<10; i++)
    {
        if (num[i]>media)
        {
            maiorMedia++;
        }
        if (num[i]==media)
        {
            igualMedia++;
        }
    }

    printf("Houve(ram) %d número(s) igual(is) a 30.\n ", num30);
    printf("Houve(ram) %d número(s) maior(es) que a média. \n",maiorMedia);
    printf("Houve(ram) %d número(s) igual(is) a média.",igualMedia);

}