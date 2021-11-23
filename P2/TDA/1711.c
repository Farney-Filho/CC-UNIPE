#include <stdio.h>
typedef struct banda
{

    char nome[30], genero[20];
    int integrantes, rank;

}banda;
int main ()
{

    banda b[5];
    banda bnovo[5];

    for (int i = 0; i < 5; i++)
    {
        fflush(stdin);
        printf("Digite o nome da %d banda: ",i+1);
        gets(b[i].nome);
        fflush(stdin);
        printf("Digite qual genero de música ela toca: ");
        gets(b[i].genero);
        printf("Digite quantos integrantes ela tem: ");
        scanf("%d",&b[i].integrantes);
        printf("Qual classificação esta banda está no seu top 5?: ");
        scanf("%d",&b[i].rank);
        
    }

    printf("RANKING DE BANDAS\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d - %s - %d integrantes - genero %s\n",)
    }
    
    

}