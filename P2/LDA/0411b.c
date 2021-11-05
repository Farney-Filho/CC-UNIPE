#include <stdio.h>
#include <string.h>

int main ()

{

    char frase[100];

    printf("Digite a frase a ser criptografada: ");
    fgets(frase,100,stdin);

    for (int i = 0; i <= strlen(frase); i++)
    {
        if (frase[i]=='a' || frase[i]=='A')
        {
            frase[i]='2';
        }
        else if (frase[i]=='e' || frase[i]=='E')
        {
            frase[i]='3';
        }
        else if (frase[i]=='i' || frase[i]=='I')
        {
            frase[i]='4';
        }
        else if (frase[i]=='o' || frase[i]=='O')
        {
            frase[i]='5';
        }
        else if (frase[i]=='u' || frase[i]=='U')
        {
            frase[i]='6';
        }
        
    }

    printf("%s",frase);
    
}