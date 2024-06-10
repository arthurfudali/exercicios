#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, num3;
    printf("Digite o primeiro número: ");
    scanf("%i", &num1);
    printf("Digite o segundo número: ");
    scanf("%i", &num2);
    printf("Digite o terceiro número: ");
    scanf("%i", &num3);
    if(num1 > num2){
        printf("O maior número é o primeiro: %i", num1);
    } else{
        if(num2 > num3){
            printf("O maior número é o segundo: %i", num2);
        }else{
            printf("O maior número é o terceiro: %i", num3);
        }
    }

    return 0;
}
