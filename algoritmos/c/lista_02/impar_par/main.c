#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Digite um n�mero para saber se o mesmo � par ou �mpar: ");
    scanf("%i", &num);
    if(num%2 == 0){
        printf("O n�mero %i � par!", num);
    } else{
        printf("O n�mero %i � �mpar!", num);
    }

    return 0;
}
