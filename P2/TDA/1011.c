#include <stdio.h>
#include <stdlib.h>

/*
Criar uma estrutura Pessoa: Nome, idade, peso e altura.  Receber os dados do usuário e imprimir em tela os dados recebidos!!
*/

// DAVI C. CARNEIRO - CC P2 NOITE UNIPÊ

typedef struct //DEFINIÇÃO DE ESTRUTURA
{
char nome[20];
int idade;
float peso, altura;
}Pessoa;

int main ()

{
 
 Pessoa p1;

 printf("Digite o nome da pessoa: ");
 gets(p1.nome);
 printf("Digite a idade da pessoa: ");
 scanf("%d",&p1.idade);
 printf("Digite o peso da pessoa: ");
 scanf("%f",&p1.peso);
 printf("Digite a altura da pessoa: ");
 scanf("%f",&p1.altura);

printf("A pessoa se chama %s, tem %d anos, pesa %.2fkg e tem %.2fm de altura.",p1.nome,p1.idade,p1.peso,p1.altura);

}