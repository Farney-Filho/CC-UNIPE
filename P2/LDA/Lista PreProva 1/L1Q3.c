#include <stdio.h>

int main()
{
    int base, altura;

    printf("Digite a base do retangulo (cm): ");
    scanf("%d",&base);
    printf("Digite a altura do retângulo (cm): ");
    scanf("%d",&altura);

    printf("A AREA do retângulo é %dcm.\n",base*altura);
    printf("O PERIMETRO do retângulo é %dcm.",2*base+2*altura);

}