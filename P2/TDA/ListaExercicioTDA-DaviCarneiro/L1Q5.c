#include <stdio.h>

int main()
{
    float num;

    printf("Digite um número: ");
    scanf("%f",&num);

    if (num>0)
    {
        printf("Como %f é positivo, seu dobro é %f.",num, num*2);
    }
    else if (num<0)
    {
        printf("Como %f é negativo, seu triplo é %f.",num, num*3);        
    }
    else
    {
        printf("Zero é complicado.");
    }
}