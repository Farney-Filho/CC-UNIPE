#include <stdio.h>

int main()
{
    int num[3], x, temp;

    for(int i=0; i<3; i++)
    {
        printf("Digite o %d numero: ",i+1);
        scanf("%d",&num[i]);
    }
    for(int i=0; i<3; i++)
    {
        for(x=i+1; x<3; x++)
        {
            if(num[i]>num[x])
            {
                temp=num[i];
                num[i]=num[x];
                num[x]=temp;
            }
        }
    }

    printf("Os elementos em ordem crescente são: ");
    for (int i=0; i<3; i++)
    {
        printf("%d ",num[i]);
    }
    
        
} 

