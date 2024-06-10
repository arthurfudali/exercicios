#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float valorPago, valorProduto, valorParcelas;
    int cp;
    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);
    printf("Digite a condição de pagamento: ");
    scanf("%i", &cp);

    switch(cp)
    {
    case 1:
        valorPago = valorProduto - (valorProduto*0.1);
        printf("Valor a ser pago é de: R$ %.2f com o desconto de 10 %% para pagamento à vista em dinheiro aplicado. ", valorPago);
        break;
    case 2:
        valorPago = valorProduto - (valorProduto*0.05);
        printf("Valor a ser pago é de: R$ %.2f com o desconto de 5 %% para pagamento à vista no cartão aplicado. ", valorPago);
        break;
    case 3:
        valorPago = valorProduto;
        valorParcelas = valorPago/2;
        printf("Valor total a ser pago é de: R$ %.2f em forma de 2 parcelas de R$ %.2f Preço sem desconto para pagamento em 2x. ", valorPago, valorParcelas);
        break;
    case 4:
        valorPago = valorProduto + (valorProduto*0.1);
        valorParcelas = valorPago/3;
        printf("Valor total a ser pago é de: R$ %.2f em forma de 3 parcelas de R$ %.2f Com a taxa de 10 %% para o pagamento de 3x. ", valorPago, valorParcelas);
    }

    return 0;
}
