#include <stdio.h>

int main ()
{

    int num[6];

    for (int i = 0; i < 6; i++)
    {
        printf("Digite o %d número: ",i+1);
        scanf("%d",&num[i]);
    }

    printf("Em ordem, contrária, os números digitados foram: \n");
    for (int i = 5; i >= 0; i--)
    {
        printf("%d",num[i]);
    }
       
}