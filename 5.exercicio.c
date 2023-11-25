#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int op;
    char produto[200];
    float valor;
    int quantidade;
    float valorFinal[200];
    int i;
    do
    {
        printf("\n----------Menu---------- \n");
        printf("1 - Adicionar uma venda\n");
        printf("2 - Sair do menu e exibir e ressultado\n");
        printf("Digite o número de acordo com sua opção: \n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("Digite a quantidade de produtos que deseja comprar: \n");
            scanf("%d", &quantidade);

            for (i = 0; i < quantidade; i++)
            {
                fflush(stdin); 

                printf("Digite o nome do produto q você vai comprar: \n");
                gets(produto);

                fflush(stdin);

                printf("Digite o valor do produto: \n");
                scanf("%f", &valor);

                fflush(stdin);
                valorFinal[i] = valor * (float)quantidade;
            }

            printf("Nome do produto: %s \n", produto);
            printf("Valor da compra: %.1f \n", valor);
            printf("Quantidades de produtos: %d \n", quantidade);
            printf("Valor tatal: %.1f \n", valorFinal);

            break;

        case 2:
            printf("Nome do produto: %s \n", produto);
            printf("Valor da compra: R$%.1f \n", valor);
            printf("Quantidades de produtos: %d \n", quantidade);
            printf("Valor tatal: R$%.1f \n", valorFinal);
            break;
        default:
            printf("Opção inválida");
        }
    } while (op != 2);

    return 0;
}