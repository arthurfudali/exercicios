#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int anos, meses, dias, total;

    printf("Quantos anos voce tem? ");
    scanf("%d", &anos);
    printf("Quantos meses voce tem? ");
    scanf("%d", &meses);
    printf("Quantos dias voce tem? ");
    scanf("%d", &dias);
    total = ((anos * 365) + (meses * 30) + dias);
    printf("Voce tem %d dias de idade!", total);

}
