#include <stdio.h>

int main()
{
    int ident,notas[3], exerc;
    float ma;
    char conceito;

    printf("Digite seu número de identificação: ");
    scanf("%d",&ident);
    printf("Digite as 3 notas em sequência: ");

    for (int i=0; i<3; i++)
    {
        scanf("%d",&notas[i]);
    }

    printf("Digite a média dos exercicios: ");
    scanf("%d", &exerc);

    ma = ((notas[0] + (notas[1]*2) + (notas[2]*3) + exerc)/7);

    if (ma>=9.0)
    {
        conceito = 'A';
    }
    else if (ma>=7.5 && ma<9.0)
    {
        conceito = 'B';
    }
    else if (ma>=6.0 && ma<7.5)
    {
        conceito = 'C';
    }
    else if (ma>=4.0 && ma<6.0)
    {
        conceito = 'D';
    }
    else
    {
        conceito = 'E';
    }
        printf("Aluno numero: %d\n",ident);
        printf("Nota 1: %d\nNota 2: %d\nNota 3: %d\n",notas[0],notas[1],notas[2]);
        printf("Média de exercicios: %d\n\n",exerc);
        printf("Média de aproveitamento: %f\n\n",ma);

    if (conceito=='A' || conceito=='B' || conceito=='C')
    {
        printf("Seu conceito foi %c e você foi aprovado.",conceito);
    }
    else
    {
        printf("Seu conceito foi %c e você foi reprovado.",conceito);
    }
}
    
    