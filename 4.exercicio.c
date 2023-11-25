#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i;
    int numero[5];
    int somaNumero = 0;
    int pares = 0;
    int somaPares = 0;
    int impares = 0;
    int negativos = 0;
    int menorNumero = 99999999;
    int maiorNumero = 0;
    float mediaNumero = 0;
    float mediaPares = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &numero[i]);

        somaNumero += numero[i];

        if (numero[i] % 2 == 0)
        {
            pares++;
            somaPares += pares;
        }
        else
        {
            impares++;
        }

        if (numero[i] < 0)
        {
            negativos++;
        }

        maiorNumero = numero[i] > maiorNumero ? numero[i] : maiorNumero;
        menorNumero = numero[i] < menorNumero ? numero[i] : menorNumero;
    }

    mediaNumero = somaNumero / (float)i;
    mediaPares = somaPares / (float)i;

    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d° Numero: %d \n", i + 1, numero[i]);
    }

    printf("\nQuantidade de Números impares: %d \n", impares);
    printf("Quantidade de números negativos: %d \n", negativos);
    printf("\n");
    printf("maior número: %d \n", maiorNumero);
    printf("Menor número: %d \n", menorNumero);
    printf("\n");
    printf("Média dos números números digitados: %f \n", mediaNumero);
    printf("Média dos números pares: %f \n", mediaPares);

    return 0;
}
