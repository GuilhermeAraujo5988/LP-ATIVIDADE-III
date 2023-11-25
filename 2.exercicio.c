#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char aluno[5][200];
    int idade[5];
    float notass[5][3];
    int b = 0;
    int i = 0;
    float somaNota = 0;
    float media[5];

    for (i = 0; i < 5; i++)
    {

        printf("Digite nome do %d° aluno: ", i + 1);
        gets(aluno[i]);

        fflush(stdin);

        printf("Digite a sua idade: ");
        scanf("%d", &idade[i]);

        for (b = 0; b < 3; b++)
        {
            printf("Digite a %d° nota do aluno: ", b + 1);
            scanf("%f", &notass[i][b]);

            somaNota += notass[i][b];
        }
        media[i] = somaNota / b;
        somaNota = 0;
        fflush(stdin);
    }

    printf("\n");

    for (i = 0; i < 5; i++)
    {
        printf("\nNome da aluno: %s \n", aluno[i]);

        fflush(stdin);

        printf("Idade do aluno: %d \n", idade[i]);

        for (b = 0; b < 3; b++)
        {
            printf("Nota: %.1f \n", notass[i][b]);
        }
        printf("Media: %.1f \n", media[i]);
        if (media[i] >= 7)
        {
            printf("Aprovado!\n");
        }
        else if (media[i] >= 5 && media[i] < 7)
        {
            printf("Recuperacao!\n");
        }
        else
        {
            printf("Reprovado!\n");
        }
    }
    return 0;
}