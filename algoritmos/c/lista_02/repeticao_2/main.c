#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, h, maiorH, menorH;
    printf("Digite a primeira altura: ");
    scanf("%d", &h);
    maiorH = h;
    menorH = h;

    for (i = 2; i < 16; i++){
        printf("Digite altura da pessoa %d: ", i);
        scanf("%d", &h);
            if (h > maiorH){
                maiorH = h;
            }
            if (h < menorH){
                menorH = h;
            }
    }

    printf("A maior altura é: %i \n", maiorH);
    printf("A menor altura é: %i", menorH);
}
