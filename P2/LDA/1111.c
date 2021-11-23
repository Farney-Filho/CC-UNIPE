#include <stdio.h>
#include <stdlib.h>

// DAVI CARNEIRO P2 CC NOITE UNIPE

typedef struct
{
    char nome[20], mat[30];
    float n[3], media;
}aluno;



int main ()

{

    aluno aluno;

    printf("Digite o nome do aluno: ");
    gets(aluno.nome);
    printf("Digite a matricula do aluno: ");
    fflush(stdin);
    gets(aluno.mat);
    fflush(stdin);
    for (int i = 0; i < 3; i++)
    {
        printf("Digite a %d nota: ",i+1);
        scanf("%f",&aluno.n[i]);
        aluno.media+=aluno.n[i];
    }
    
    aluno.media=aluno.media/3;
    
    printf("O aluno se chama %s\n",aluno.nome);
    printf("Matrícula: %s\n",aluno.mat);
    printf("N1=%.1f  N2=%.1f  N3=%.1f\n",aluno.n[0],aluno.n[1],aluno.n[2]);
    printf("Média=%.1f",aluno.media);
}