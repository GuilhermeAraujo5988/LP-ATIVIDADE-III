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
        printf("1- Adicionar um número \n");
        printf("2- Mostrar números cadastrados \n\n");
        printf("Digite o código de preferência: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:

            fflush(stdin);
            printf("Digite seu nome: ");
            gets(nome);

            fflush(stdin);

            printf("Digite o número telefônico: \n");
            scanf("%d", &numero);

            fflush(stdin);

            quantidade++;
            break;
        case 2:
            for (i = 0; i < quantidade; i++)
            {
                printf("Nome: %s \n", nome[i]);
                printf("Número cadastrado: %d \n\n", numero[i]);
            }

            break;

        default:
            printf("Número inválido");
            break;
        }
    } while (op != 2);
    return 0;
}