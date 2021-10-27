#include <stdio.h>

int main()
{
    float km;
    int band;

    printf("Informa a distancia da corrida em km: ");
    scanf("%f",&km);
    printf("Informe a bandeira da corrida: ");
    scanf("%d",&band);

    while (band!=1 && band!=2)
    {
        printf("Bandeira não detectada. Favor repetir: ");
        scanf("%d",&band);
    }
    

    switch (band)
    {
    case 1:
        printf("O valor da corrida será %.2f.",km*1.8);
        break;
    case 2:
        printf("O valor da corrida será %.2f.",km*2.3);
        break;
    }
    
}