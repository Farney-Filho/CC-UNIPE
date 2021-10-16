#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool a, b;
    int tempa,tempb;

    printf("Insira se o primeiro valor é true ou false\n");
    printf("1 - TRUE / 0 - FALSE\n");
    printf("Resposta: ");
    scanf("%d",&tempa);
    printf("Insira se o segundo valor é true ou false\n");
    printf("1 - TRUE / 0 - FALSE\n");
    printf("Resposta: ");
    scanf("%d",&tempb);

    a = tempa;
    b = tempb;

    if ((a==1 && b==1) || (a==2 && b==2))
    {
        printf("Os resultados são true.");
    }
    else
    {
        printf("Os resultados são false.");
    }
}