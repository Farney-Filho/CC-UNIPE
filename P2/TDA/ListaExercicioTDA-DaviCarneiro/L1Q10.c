#include <stdio.h>

int main()
{
    float peso, altura, imc;

    printf("Digite seu peso: ");
    scanf("%f",&peso);
    printf("Digite sua altura: ");
    scanf("%f",&altura);

    imc = peso / (altura*altura);

    if (imc<18.5)
    {
        printf("Você está abaixo do peso.");
    }
    else if (imc>=18.5 && imc<25)
    {
        printf("Você está em peso normal.");
    }
    if (imc>=25 && imc<30)
    {
        printf("Você está acima do peso.");
    }
    if (imc>30)
    {
        printf("Você está obeso.");
    }
}
    