#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float produtos[10], soma;
    int cont1=0, cont2=0, cont3=0;

    for (int i=0; i<10; i++)
    {
        printf("Insira o valor do %d produto: ",i+1);
        scanf("%f",&produtos[i]);
        soma += produtos[i];
            if (produtos[i]<50)
            {
                cont1++;
            }
            else if ((produtos[i]>50) || (produtos[i]<80))
            {
                cont2++;
            }
            else if (produtos[i]>80)
            {
                cont3++;
            }
    }
            
        printf("A quantidade de produtos com preço menor que $50 é %d\n",cont1);
        printf("A quantidade de produtos com preço entre $50 e $80 é %d\n",cont2);
        printf("A quantidade de produtos com preço maior que $80 é %d\n",cont3);

        soma = soma/10;

        printf("A média de preço é %.2f.",soma);


    return 0;
}