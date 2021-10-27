#include <stdio.h>
// PROVA 1 LDA CC P2 NOITE - DAVI CARNEIRO
int main()
{

    float fare[10], celc[10];

    for (int i=0; i<10; i++)
    {
        printf("Insira a temperatura %d: ",i+1);
        scanf("%f",&fare[i]);
        celc[i] = (fare[i] - 32) * 5/9;
    }

    printf("\nAs temperaturas em celcius foram: ");
    for (int i=0; i<10; i++)
    {
        printf("%.2f ",celc[i]);
    }

    printf("\nAs temperaturas em farenheit foram: ");
    for (int i=0; i<10; i++)
    {
        printf("%.2f ",fare[i]);
    }
}