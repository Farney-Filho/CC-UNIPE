#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int num;

    printf("Digite um número para ver sua tabuada: ");
    scanf("%d",&num);

    for (int i=1; i<10; i++)
    {
        printf("%d * %d = %d\n",num, i, num*i);
    }
}