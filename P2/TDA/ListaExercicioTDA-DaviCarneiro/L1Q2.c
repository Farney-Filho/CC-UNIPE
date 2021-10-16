#include <stdio.h>

int main()
{
    char nome[6];
    char sexo;
    char estcivil[30];
    int anosCasada;

    printf("Digite seu nome: ");
    gets(nome);
    printf("Digite seu sexo (M/F): ");
    scanf(" %c",&sexo);
    printf("Digite seu estado civil: ");
    gets(estcivil);

    //BUG: gets estcivil não roda

    if ((sexo=='F') && (estcivil=='CASADA' || estcivil=='casada' || estcivil=='Casada'))
    {
        printf("Por favor, informe há quanto tempo está casada (apenas anos).");
        scanf("%d",&anosCasada);
    }
}   
    
    



