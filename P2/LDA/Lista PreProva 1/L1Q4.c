#include <stdio.h>

int main()
{
    int pedro, joana;

    printf("Digite a idade de Pedro: ");
    scanf("%d",&pedro);
    printf("Digite a idade de Joana: ");
    scanf("%d",&joana);

    if (pedro>joana)
    {
        printf("Pedro é mais velho que Joana.");
    }
    else
    {
        printf("Joana é mais velha que Pedro.");
    }


}