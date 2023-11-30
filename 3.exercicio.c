#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    char numeros[99][100];
    int codigo;
    int i;
    int j = 0;
    char nomes[99][200];

    printf("Menu");
    printf("\n\n1 -Cadastrar novo contato na lista telefonica \n");
    printf("2 - Mostrar os números cadastrados: ");
    scanf("%d", &codigo);
    system("cls || clear");

    do
    {

        fflush(stdin);

        printf("Nome: ");
        gets(nomes[j]);

        printf("Número: ");
        gets(numeros[j]);

        printf("\n\n1 -Cadastrar novo contato na lista telefonica \n");
        printf("2 - Mostrar os números cadastrados: ");

        printf("\nDigite a opção desejada: ");
        scanf("%d", &codigo);
        system("cls || clear");
        j++;

    } while (codigo != 2);

    printf("NÚMEROS CADASTRADOS:\n\n");
    for (i = 0; i < j; i++)
    {
        printf("Nome: %s\n", nomes[i]);
        printf("Número: %s\n\n", numeros[i]);
    }

    return 0;
}
