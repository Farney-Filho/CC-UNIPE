#include <stdio.h>
#include <string.h>

int main ()

{

    char frase1[100],frase2[100];

    printf("Digite a primeira frase: ");
    fgets(frase1, 100, stdin);
    printf("Digite a segunda frase: ");
    fgets(frase2, 100, stdin);

        frase1[strcspn(frase1, "\n")]=0;
        frase2[strcspn(frase2, "\n")]=0;

        printf("%d\n",stricmp(frase1,frase2));

    if (strcmp(frase1,frase2)==0)
    printf("As frases são iguais.");

    else
    {
        printf("%s",strcat(frase1,frase2));
    }
}