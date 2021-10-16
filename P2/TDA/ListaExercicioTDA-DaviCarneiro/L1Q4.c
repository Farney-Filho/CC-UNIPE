#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Insira o primeiro valor: ");
    scanf("%d",&a);
    printf("Insira o segundo valor: ");
    scanf("%d",&b);

    if (a==b)
    {
        c=a+b;
    }
    else
    {
        c=a*b;
    }

    printf("A variável c é %d,",c);

}
        