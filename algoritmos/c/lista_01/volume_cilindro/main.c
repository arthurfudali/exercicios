#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float raio, altura, volume;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    printf("Digite o valor da altura: ");
    scanf("%f", &altura);
    volume = ((raio*raio)*3.14*altura);
    printf("O volume do cilindro é: %f", volume);
}
