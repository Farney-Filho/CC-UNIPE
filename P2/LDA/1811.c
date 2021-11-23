#include <stdio.h>
#include <string.h>

typedef struct comodo
{
    float larg, comp, area;
    char nome[20];
}comodos;

int main ()

{
    char resp;
    comodos comodo[5];
    int contComodos=0;

    for (int i = 0; i < 5; i++)
    {
        fflush(stdin);
        printf("- COMODO %d - \n",i+1);
        printf("Nome do comodo: ");
        fgets(comodo[i].nome,20,stdin);
        fflush(stdin);
        comodo[i].nome[strlen(comodo[i].nome)-1]='\0';
        printf("Largura do comodo: ");
        scanf("%f",&comodo[i].larg);
        printf("Comprimento do comodo: ");
        scanf("%f",&comodo[i].comp);
        fflush(stdin);

        comodo[i].area=(comodo[i].comp*comodo[i].larg);
        contComodos++;
        fflush(stdin);

        printf("Comodo %d/5 inserido. Deseja inserir outro comodo?: ",i+1);
        scanf("%c",&resp);
        fflush(stdin);
            if (resp=='N' || resp=='n')
                {
                    break;
                }
    }
    
    printf("\nA casa tem %d comodos:\n",contComodos);

    float areaTotal;

    for (int i = 0; i < contComodos; i++)
    {
        printf("%s - Largura: %.2f  Comprimento: %.2f\n",comodo[i].nome, comodo[i].larg,comodo[i].comp);
        printf("Area = %.2f\n",comodo[i].area);
        areaTotal+=comodo[i].area;
    }
        printf("Area total da casa = %.2f",areaTotal);
}