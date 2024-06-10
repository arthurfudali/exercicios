#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int tempofunc;
    float salario, bonus, total;
    printf("Digite o valor do salário do funcionário: ");
    scanf("%f", &salario);
    printf("Digite quantos anos de casa o funcionário tem: ");
    scanf("%i", &tempofunc);
    if(tempofunc >= 5){
        total = (salario+(salario*0.2));
        bonus = total-salario;
        printf("O valor total do salário será de: %.2f R$, o valor do bônus é de: %.2f R$", total, bonus);
    }else{
        total = (salario+(salario*0.1));
        bonus = total-salario;
        printf("O valor total do salário será de: %.2f R$, o valor do bônus é de: %.2f R$", total, bonus);
    }


    return 0;
}
