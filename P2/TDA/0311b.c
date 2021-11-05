#include <stdio.h>
#include <string.h>

int main ()
{

    char nomea[20], nomeb[20];
    
    printf("Digite o primeiro nome: ");
    scanf("%s",nomea);
    printf("Digite o segundo nome: ");
    scanf("%s",nomeb);

    printf("O tamanho do primeiro nome é %d caracteres.\n",strlen(nomea));
    printf("O tamanho do segundo nome é %d caracteres.\n",strlen(nomeb));

    if (strcmp(nomea,nomeb)==0)
    {
        printf("Os nomes são iguais.");
    }
    if (strcmp(nomea,nomeb)>0)
    {
        printf("O primeiro nome é maior que o segundo.");
    }
    if (strcmp(nomea,nomeb)<0)
    {
        printf("O segundo nome é maior que o primeiro.");
    }
}