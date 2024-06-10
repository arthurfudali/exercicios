#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero, antecessor, sucessor;

    printf("Informe o valor: ");
    scanf("%d", &numero);
    antecessor = numero-1;
    sucessor = numero+1;
    printf("O antecessor é: %d \n", antecessor);
    printf("O sucessor é: %d", sucessor);


}
