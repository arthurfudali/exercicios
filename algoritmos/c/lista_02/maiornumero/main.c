#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, num3;
    printf("Digite o primeiro n�mero: ");
    scanf("%i", &num1);
    printf("Digite o segundo n�mero: ");
    scanf("%i", &num2);
    printf("Digite o terceiro n�mero: ");
    scanf("%i", &num3);
    if(num1 > num2){
        printf("O maior n�mero � o primeiro: %i", num1);
    } else{
        if(num2 > num3){
            printf("O maior n�mero � o segundo: %i", num2);
        }else{
            printf("O maior n�mero � o terceiro: %i", num3);
        }
    }

    return 0;
}
