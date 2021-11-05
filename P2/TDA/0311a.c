#include <stdio.h>

int main ()
{
    float nota[4][10];

    for (int l = 0; l < 10; l++)
    {
        for (int c = 0; c < 3 ; c++)
        {
            printf("Digite a nota %d do aluno %d: ",c+1,l+1);
            scanf("%f",&nota[l][c]);
        }
            nota[l][3]=(nota[l][0]+nota[l][1]+nota[l][2])/3;
    }
    

        for (int l = 0; l < 10; l++)
    {
            printf("- Aluno %d -\n",l+1);
        for (int c = 0; c < 3 ; c++)
        {
            printf("N%d=%.2f\n",c+1,nota[l][c]);
        }
            printf("Média = %.2f\n\n",nota[l][3]);
    }

}