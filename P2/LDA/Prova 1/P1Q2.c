#include <stdio.h>
//DAVI CARNEIRO - PROVA 1 LDA CC P2 NOITE
int main()
{

    int destino;
    char idaVolta;

    printf("1 - NORTE\n2 - NORDESTE\n3 - CENTRO-OESTE\n4 - SUL\n\n");
    printf("Olá! Por favor, digite o código do destino da sua viágem:");
    scanf("%d",&destino);

        while (destino>4 || destino<1)
        {
            printf("Não compreendi. Digite o código da região que deseja ir: ");
            scanf("%d",&destino);
        }
        

    printf("Entendi. Sua passagem inclui retorno? (S/N)");
    scanf(" %c",&idaVolta);

        while (idaVolta!='S' && idaVolta!='s' && idaVolta!='N' && idaVolta!='n')
        {
            printf("Não compreendi. Informe se sua viágem deve possuir o retorno (S/N): ");
            scanf(" %c",&idaVolta);
        }

    switch (destino)
    {
    case 1:
        
        if (idaVolta=='S' || idaVolta=='s')
        {
            printf("Sua passagem de ida e volta da região norte custará: R$ 900");
        }
        else
        {
            printf("Sua passagem de ida para a região norte custará: R$ 5OO.");
        }
        break;
    case 2:
        
        if (idaVolta=='S' || idaVolta=='s')
        {
            printf("Sua passagem de ida e volta da região nordeste custará: R$ 650");
        }
        else
        {
            printf("Sua passagem de ida para a região nordeste custará: R$ 350.");
        }
        break;
    case 3:
        
        if (idaVolta=='S' || idaVolta=='s')
        {
            printf("Sua passagem de ida e volta da região Centro-Oeste custará: R$ 600");
        }
        else
        {
            printf("Sua passagem de ida para a região norte custará: R$ 350.");
        }
        break;
    case 4:
        
        if (idaVolta=='S' || idaVolta=='s')
        {
            printf("Sua passagem de ida e volta da região sul custará: R$ 550");
        }
        else
        {
            printf("Sua passagem de ida para a região norte custará R$ 300.");
        }
        break;    
    }


}