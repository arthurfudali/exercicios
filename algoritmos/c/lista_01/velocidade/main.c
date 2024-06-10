#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float kmh, mh;

    printf("Digite a velocidade em Km/h para ser convertida em m/h: ");
    scanf("%f", &kmh);
    mh = (kmh*0.62);
    printf("A velocidade em m/h é: %f", mh);
}
