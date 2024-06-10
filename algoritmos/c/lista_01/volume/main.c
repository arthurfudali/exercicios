#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");
    float lar, alt, comp, vol;

    printf("Digite o valor da altura da caixa: ");
    scanf("%f", &alt);
    printf("Digite o valor do comprimento da caixa: ");
    scanf("%f", &comp);
    printf("Digite o valor da largura da caixa: ");
    scanf("%f", &lar);
    vol = comp*alt*lar;
    printf("O volume da caixa é: %f", vol);
}
