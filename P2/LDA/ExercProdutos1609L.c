#include <stdio.h>

int main()
{

    int codigo, quant;
    float preco;
    
    printf("Digite o código do item adquirido: ");
    scanf("%d",&codigo);
    printf("Digite a quantidade adquirida: ");
    scanf("%d",&quant);
    
    switch(codigo)
    {
        case 100:
            printf("Valor final = %.2f",1.7*quant);
            break;
        case 101:
            printf("Valor final = %.2f",2.3*quant);
            break;
        case 102:
            printf("Valor final = %.2f",2.6*quant);
            break;
        case 103:
            printf("Valor final = %.2f",2.4*quant);
            break;
        case 104:
            printf("Valor final = %.2f",2.5*quant);
            break;
        case 105:
            printf("Valor final = %.2f",1.0*quant);
            break;
        default:
            printf("Código não reconhecido.");
    }    

    return 0;
}
