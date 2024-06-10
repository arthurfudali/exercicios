#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float f, c;
    printf("Digite o valor da temperatura em F°: ");
    scanf("%f", &f);
    c = (f-32)/1.8;
    printf("A temperatura convertida para C° é: %f ", c);

}
