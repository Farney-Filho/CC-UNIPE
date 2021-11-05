#include <stdio.h>

int main()
{   
    int tab[3][3];

    for (int l = 0; l < 3; l++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("Digite o valor da celula %dx%d: ",l, c);
            scanf("%d",&tab[l][c]);
                if (tab[l][c]%2==0)
                {
                    tab[l][c]=tab[l][c]+1;
                }
                else
                {
                    tab[l][c]=tab[l][c]-1;
                }
        }
    }

    for (int l = 0; l < 3; l++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("[%d] ",tab[l][c]);
        }    
    printf("\n");
    }
}