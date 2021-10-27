#include <stdio.h>

int main ()
{

    int nota [10], soma=0, maior, menor, media;

    for (int i=0; i<10; i++)
    {   
        printf("Digite a nota do aluno %d: ",i+1);
        scanf("%d",&nota[i]);
        soma = soma + nota[i];

        if (i==0)
        {
            maior=nota[i];
            menor=nota[i];
        }

        if (nota[i]>maior)
        {
            maior = nota[i];
        }
        if (nota[i]<menor)
        {
            menor = nota[i];
        }
        
    }

    media = soma/10;

    printf("A soma dos números é %d.\n",soma);
    printf("A média dos números é %d.\n",media);
    printf("O maior número é %d.\n",maior);
    printf("O menor número é %d.",menor);
  
}