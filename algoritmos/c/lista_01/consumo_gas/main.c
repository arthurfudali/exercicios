#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float ki, kf, cc, dp, gc;

    printf("Escreva a quilometragem inicial: ");
    scanf("%f", &ki);
    printf("Escreva a quilometragem final: ");
    scanf("%f", &kf);
    printf("Escreva o consumo de combustivel, em litros, da viagem: ");
    scanf("%f", &cc);
    dp = kf-ki;
    gc = dp/cc;
    printf("O consumo do seu carro é de: %f km/l", gc);

}
