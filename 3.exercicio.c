#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int numero[5];
    int i = 0;
    int op;
    int quantidade = 0;
    char nome[5][200];

    do
    {
        printf("1- Adicionar um n�mero \n");
        printf("2- Mostrar n�meros cadastrados \n\n");
        printf("Digite o c�digo de prefer�ncia: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:

            fflush(stdin);
            printf("Digite seu nome: ");
            gets(nome);

            fflush(stdin);

            printf("Digite o n�mero telef�nico: \n");
            scanf("%d", &numero);

            fflush(stdin);

            quantidade++;
            break;
        case 2:
            for (i = 0; i < quantidade; i++)
            {
                printf("Nome: %s \n", nome[i]);
                printf("N�mero cadastrado: %d \n\n", numero[i]);
            }

            break;

        default:
            printf("N�mero inv�lido");
            break;
        }
    } while (op != 2);
    return 0;
}