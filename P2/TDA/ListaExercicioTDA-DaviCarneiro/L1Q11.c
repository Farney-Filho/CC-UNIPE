#include <stdio.h>

int main()
{
    float preco;
    int forma;

    printf("Digite o valor do produto: ");
    scanf("%f",&preco);
    printf("1 - A VISTA (DINHEIRO - 10% DESCONTO)\n2 - A VISTA (CREDITO - 15% DESCONTO)\n3 - 2X SEM JUROS\n4 - +2X JUROS DE 10%\n");
    printf("Digite a forma de pagamento: ");
    scanf("%d",&forma);

    switch (forma)
    {
    case 1:
        preco = preco - (10*preco)/100;
        break;
    case 2:
        preco = preco - (15*preco)/100;
        break;
    case 3:
        break;
    case 4:
        preco = preco + (10*preco)/100;
        break;
    default:
        printf("Forma de pagamento não identificada.");
        break;
    }
        printf("O preco a ser pago e %f.",preco);
}