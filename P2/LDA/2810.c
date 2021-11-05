#include <stdio.h>

int main (){

    int tab[4][4], media[4];

    for (int l = 0; l < 4; l++)
    {
        for (int c = 0; c < 4; c++)
        {
            printf("Digite o valor da célula %dx%d: ",l,c);
            scanf("%d",&tab[l][c]);
        }
        media[l] = (tab[l][0]+tab[l][1]+tab[l][2]+tab[l][3])/4;        
    }

    for (int l = 0; l < 4; l++)
    {
        for (int c = 0; c < 4; c++)
        {
            printf("[%d] ",tab[l][c]);
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++)
    {
        printf("A média da %d linha é %d.\n",i+1,media[i]);
    }
    

}