#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i = 1, n, pos=0, neg=0, qtdValores;
    float media, percentualPos, percentualNeg, soma=0.0;

    while(i>0){
        printf("Digite um número: ");
        scanf("%d", &n);

        soma+= n;

        if (n > 0){
            pos++;
        }
        else if(n < 0){
            neg++;
        }

        if (n == 0){
            break;
        }
        i++;

    }

    qtdValores = i-1;

    media = soma/qtdValores;

    percentualPos = ((float)pos/(float)qtdValores)*100;
    percentualNeg = ((float)neg/(float)qtdValores)*100;



    printf("a qtd de valores totais é: %d \n", qtdValores);
    printf("a qtd de valores positivos é: %d \n", pos);
    printf("a qtd de valors negativos é: %d \n", neg);
    printf("A percentagem de valors positivos é: %f \n", percentualPos);
    printf("A percentagem de valors negativos é: %f \n", percentualNeg);
    return 0;
}
