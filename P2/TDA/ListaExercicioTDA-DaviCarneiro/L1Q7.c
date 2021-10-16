#include <stdio.h>

int main()
{
    int num;

    printf("Digite um número: ");
    scanf("%d",&num);

    if (num%2==0)
    {
        num = num+5;
    }
    else
    {
        num = num+8;
    }

    printf("O resultado é %d.",num);
    
}