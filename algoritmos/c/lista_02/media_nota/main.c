#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int nota1, nota2;
    float media;
    printf("Digite a primeira nota da avalia��o: ");
    scanf("%i", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%i", &nota2);
    media = (nota1+nota2)/2;
    if(media < 7){
        printf("Voc� foi reprovado, sua m�dia foi: %.2f", media);
    } else{
        printf("Voce foi aprovado, sua m�dia foi: %.2f", media);
    }

    return 0;
}





