#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int segundos, horastotais, sobrahoras, sobraminutos, minutostotais;

    printf("Digite uma quantidade de segundos para ser convertido: ");
    scanf("%d", &segundos);

    //horastotais = segundos/3600;
    //sobrahoras = segundos-(horastotais*3600);
    //minutostotais = sobrahoras

    horastotais = segundos/3600;
    sobrahoras  = segundos%3600;
    minutostotais = sobrahoras/60;
    sobraminutos = sobrahoras%60;
    //printf("%d \n", horastotais);
    //printf("%d \n", minutostotais);
    //printf("%d \n", sobraminutos);

    printf("A conversão dos segundos para horas será: %d hora %d min %d segundos. ", horastotais, minutostotais, sobraminutos);
}
