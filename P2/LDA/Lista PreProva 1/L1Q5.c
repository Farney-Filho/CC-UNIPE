#include <stdio.h>

int main()
{
    int pedro, joana, ismael;

    printf("Digite a idade de Pedro: ");
    scanf("%d",&pedro);
    printf("Digite a idade de Joana: ");
    scanf("%d",&joana);
    printf("Digite a idade de Ismael: ");
    scanf("%d",&ismael);

    if (pedro>joana && pedro>ismael)
    {
        printf("Pedro é mais velho que Joana e que Ismael.");
    }
    else if (joana>pedro && joana>ismael)
    {
        printf("Joana é mais velha que Pedro e que Ismael.");
    }
    else
    {
        printf("Ismael é mais velho que Joana e que Pedro.");
    }


}