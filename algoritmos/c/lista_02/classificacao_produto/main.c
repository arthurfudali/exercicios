#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int codigo;
    printf("Digite o c�digo do produto: ");
    scanf("%i", &codigo);
    switch (codigo)
    {
        case 1:
        printf("Alimento n�o-perec�vel");
        break;

        case 2:
        case 3:
        case 4:
            printf("Alimento Perec�vel");
            break;
        case 5:
        case 6:
            printf("Vestu�rio");
            break;
        case 7:
            printf("Higiene pessoal");
            break;
        case 8:
        case 9:
        case 10:
            printf("Utens�lios dom�sticos");
            break;

        default:
        printf("Valor inv�lido! ");
    }

    return 0;
}
