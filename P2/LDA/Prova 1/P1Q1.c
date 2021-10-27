#include <stdio.h>
//DAVI CARNEIRO - PROVA 1 LDA CC P2 NOITE
int main()
{
    float salario[8], salarioNovo[8];

    for (int i=0; i<=7; i++)
    {
        printf("Digite o salário do empregado numero %d: ", i+1);
        scanf("%f", &salario[i]);

        while (salario[i]<=0)
        {
            printf("Por favor, insira outro valor: ");
            scanf("%f",&salario[i]);
        }
        
        salarioNovo[i] = salario[i]+(0.08*salario[i]);
    }

    for (int i=0; i<=7; i++)
    {
        printf("Empregado %d: Salario inicial: %f   Novo Salário: %f\n",i+1, salario[i],salarioNovo[i]);
    }    



}