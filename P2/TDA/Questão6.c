#include <stdio.h>

int main()
{   // declaração: tabelaNormal, x e y são o tamanho da tabelaNova, tabelNova.
    int tab[4][4],x=0, y=0, tabImp[x][y];
//Montagem da TabelaNormal
    for (int l = 0; l < 5; l++)
    {
        for (int c = 0; c < 5; c++)
        {
            printf("Digite o valor da celula %dx%d: ",l, c);
            scanf("%d",&tab[l][c]);
            if (tab[l][c]%2!=0) //caso seja impar
            {
                tabImp[x][y] = tab[l][c]; //0x0 é o numero impar
                y++; //vira 0x1
                if (y==5) //se chegar em 0x5
                {
                    x++; //vira 1x0
                    y=0;
                }      
            }
        }
    }

        if (x>0 && y!=4) //se a segunda linha não estiver completa...
        {
            for (int o = 4; o > y; o--)  //Limpeza de linha 
            {
                tabImp[x][o] = 00000;
            }
            }
        {  
        
    // Print de tabela impar
    for (int i = 0; i < x; i++)
    {
        for (int o = 0; o < y; o++)
        {
            printf("[%d] ",tabImp[i][o]);
        }
        printf("\n");
    }

    }
}