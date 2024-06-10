#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int codigo1, codigo2, qtd1, qtd2;
    float ipi, valor1, valor2, total;

    printf("Digite o valor do IPI a ser acrescentado: ");
    scanf("%f", &ipi);
    printf("Digite o codigo da peça 1: ");
    scanf("%d", &codigo1);
    printf("Digite o valor da primeira peça: ");
    scanf("%f", &valor1);
    printf("Digite a quantidade de peças: ");
    scanf("%d", &qtd1);

    printf("Digite o codigo da peça 2: ");
    scanf("%d", &codigo2);
    printf("Digite o valor da segunda peça: ");
    scanf("%f", &valor2);
    printf("Digite a quantidade de peças: ");
    scanf("%d", &qtd2);
    total = (((valor1*qtd1) + (valor2*qtd2)) * ((ipi/100)+1));
    printf("O valor total das peças é: %f RS$", total);

}
