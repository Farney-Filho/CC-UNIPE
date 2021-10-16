#include <stdio.h>

int main()
{

    float altura;
    char sexo;

    printf("Digite seu sexo (M/F): ");
    scanf(" %c",&sexo);
    printf("Digite sua altura: ");
    scanf("%f",&altura);

    switch (sexo)
    {
        case 'M':
        printf("Seu peso ideal é: %f",(altura*72.7)-58);
        break;
        case 'F':
        printf("Seu peso ideal é: %f",(altura*62.1)-44.7);
        break;
        default:
        printf("Sexo não identificado. Favor repetir o programa.");
        break;
    }
}
    