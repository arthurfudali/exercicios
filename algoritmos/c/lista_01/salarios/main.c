#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float valor, salMinimo, salario;
    printf("Digite o valor do seu sal�rio: ");
    scanf("%f", &salario);
    salMinimo = 1320;
    valor = salario/salMinimo;
    printf("A quantidade de sal�rios min�mos �: %f", valor);
}
