#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    char nomeProduto[99][200];
    float preco[99];
    int quantidade[99];
    int i = 0;
    int j = 0;
    int resp = 0;
    float totalVendas = 0;
    float venda = 0;

    do
    {
        printf("1. Para continuar cadastrando\n");
        printf("2. Para encerrar e mostrar os nÃºmeros\n");
        scanf("%d", &resp);
        puts("");

        if (resp == 1)

        {
            printf("Digite o nome do produto: ");
            scanf("%s", &nomeProduto[i]);

            printf("Digite o valor do produto: ");
            scanf("%f", &preco[i]);

            printf("Digite a quantidade do produto: ");
            scanf("%d", &quantidade[i]);
            totalVendas = totalVendas + preco[i];
            venda = totalVendas * quantidade[i];
            i = i + 1;
            j++;
        }

    } while (resp == 1);

    printf("\n\nExibindo dados..........\n\n");

    for (i = 0; i < j; i++)
    {
        printf("Nome do produto: %s \n", nomeProduto[i]);
        printf("Quantidade do produto: %d \n", quantidade[i]);
        printf("Valor: R$ %f \n\n", preco[i]);
    }

    printf("Total de vendas foi de R$ %.1f\n", venda);

    return 0;
}
