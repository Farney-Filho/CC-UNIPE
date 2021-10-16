#include <stdio.h>

int main()
{
    char operacao;
    float numero1, numero2;
    
    printf("Insira o primeiro número a ser utilizado: ");
    scanf("%f",&numero1);
    printf("\n+ - Soma\n");
    printf("- - Subtração\n");
    printf("/ - Divisão\n");
    printf("* - Multiplicação\n");    
    printf("\n%.2f _ _\n\n",numero1);
    printf("Insira a operação desejada:");
    scanf(" %c",&operacao);

switch(operacao)
{
    case '+':
        printf("%.2f + _\n\n",numero1);
        printf("Insira o segundo número a ser utilizado: ");
        scanf("%f",&numero2);
        printf("\n%.2f + %.2f = %.2f.",numero1,numero2,numero1+numero2);
        break;
    case '-':
        printf("%.2f - _\n\n",numero1);
        printf("Insira o segundo número a ser utilizado: ");
        scanf("%f",&numero2);
        printf("\n%.2f - %.2f = %.2f.",numero1,numero2,numero1-numero2);
        break;
    case '/':
        printf("%.2f / _\n\n",numero1);
        printf("Insira o segundo número a ser utilizado: ");
        scanf("%f",&numero2);
        printf("\n%.2f / %.2f = %.2f.",numero1,numero2,numero1/numero2);
        break;
    case '*':
        printf("%.2f * _\n\n",numero1);
        printf("Insira o segundo número a ser utilizado: ");
        scanf("%f",&numero2);
        printf("\n%.2f * %.2f = %.2f.",numero1,numero2,numero1*numero2);
        break;
    default:
        printf("Operação inválida.");
        
}

    return 0;
}
