#include <stdio.h>

int main ()
{

    int num;

    printf("Digite o número do mês que deseja visualizar: ");
    scanf("%d",&num);

    switch (num)
    {
    case 1:
        printf("O mês de número %d é JANEIRO.",num);
        break;
    case 2:
        printf("O mês de número %d é FEVEREIRO.",num);
        break;
    case 3:
        printf("O mês de número %d é MARÇO.",num);
        break;
    case 4:
        printf("O mês de número %d é ABRIL.",num);
        break;
    case 5:
        printf("O mês de número %d é MAIO.",num);
        break;
    case 6:
        printf("O mês de número %d é JUNHO.",num);
        break;
    case 7:
        printf("O mês de número %d é JULHO.",num);
        break;
    case 8:
        printf("O mês de número %d é AGOSTO.",num);
        break;
    case 9:
        printf("O mês de número %d é SETEMBRO.",num);
        break;
    case 10:
        printf("O mês de número %d é OUTUBRO.",num);
        break;
    case 11:
        printf("O mês de número %d é NOVEMBRO.",num);
        break;
    case 12:
        printf("O mês de número %d é DEZEMBRO.",num);
        break;
    default:
        printf("Número invalido.");
        break;
    }

}