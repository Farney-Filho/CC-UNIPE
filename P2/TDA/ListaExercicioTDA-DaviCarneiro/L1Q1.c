#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Digite o primeiro valor: ");
    scanf("%d",&num1);
    printf("Digite o segundo valor: ");
    scanf("%d",&num2);
    printf("Digite o terceiro valor: ");
    scanf("%d",&num3);
    
    if ((num1+num2)<num3)
    {
        printf("A soma do primeiro valor (%d) com o segundo  valor(%d) resulta em %d,que é menor que o terceiro valor (%d).",num1,num2,num1+num2,num3);
    }
    else if ((num1+num2)>num3)
    {
        printf("A soma do primeiro valor (%d) com o segundo  valor(%d) resulta em %d,que é maior que o terceiro valor (%d).",num1,num2,num1+num2,num3);
    }
    else
    {
        printf("A soma do primeiro valor (%d) com o segundo  valor(%d) resulta em %d,que é igual ao terceiro valor (%d).",num1,num2,num1+num2,num3);
    }
}
