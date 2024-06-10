#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int valorPago, horaEntrada, minEntrada, horaSaida, minSaida, totalhora, totalMin;

    printf("Digite a hora e o minuto de entrada: (HH MM)");
    scanf("%d %d", &horaEntrada, &minEntrada);

    printf("Digite a hora e o minuto de saída: (HH MM)");
    scanf("%d %d", &horaSaida, &minSaida);

    totalhora = horaSaida- horaEntrada;
    totalMin = minSaida - minEntrada;
    if(totalhora < 0){
        printf("Pague o valor de uma diária!");
    }
    else{
    if(totalhora == 1 && totalMin == 0){
        printf("Você passou 1 hora no estacionamento, pague RS 4,00!");
    } else{
        if(totalhora == 1 && totalMin != 0){
            printf("Você passou mais de 1 hora no estacionamento, pague R$6,00");
        } else{
            if(totalhora == 2 && totalMin == 0){
                printf("Você passou 2 horas no estacionamento, pague R$6,00");
            } else{
                if(totalMin == 0){
                    valorPago = (totalhora-2) + 6;
                    printf("O valor que você deverá pagar pelo tempo no estacionamento é de: R$ %d  \n", valorPago);
                } else{
                    valorPago = (totalhora-2) + 7;
                    printf("O valor que você deverá pagar pelo tempo no estacionamento é de: R$ %d \n", valorPago);
                    }
                }
            }
        }
    }
    return 0;
}

