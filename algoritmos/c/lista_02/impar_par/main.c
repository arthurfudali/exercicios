#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Digite um número para saber se o mesmo é par ou ímpar: ");
    scanf("%i", &num);
    if(num%2 == 0){
        printf("O número %i é par!", num);
    } else{
        printf("O número %i é ímpar!", num);
    }

    return 0;
}
