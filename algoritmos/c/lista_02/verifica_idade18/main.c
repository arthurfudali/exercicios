#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int idade;
    printf("Digite sua idade: ");
    scanf("%i", &idade);
    if(idade <18){
        printf("Voc� � menor de idade!");
    } else{
        printf("Voc� � maior de idade!");
    }

    return 0;
}
