#include <stdio.h>

int main ()
{

    int num[10], impares, pares, contpar=0, contimpar=0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %d número: ",i+1);
        scanf("%d",&num[i]);

        if (contpar==0 || contimpar==0)
        {
            if (num[i]%2==0)
            {
                pares = num[i];
                contpar++;
            }
            else
            {
                impares = num[i];
                contimpar++;
            }
            
        }
        
        else if (num[i]%2!=0)
        {
            impares -= num[i];
        }
        else
        {
            pares += num[i];
        }
        
    }
    
    printf("A soma dos valores pares é %d.\n",pares);
    printf("A subtração dos valores impares é %d.",impares);

}