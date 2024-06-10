#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float valor, salario, vparcelas;
    int nparcelas;
    printf("Digite o seu salário: ");
    scanf("%f", &salario);
    printf("Digite o valor do empréstimo: ");
    scanf("%f", &valor);
    printf("Digite o número de parcelas: ");
    scanf("%i", &nparcelas);
    vparcelas = valor/nparcelas;
    if(vparcelas <= salario*0.3){
        printf("Empréstimo aprovado! ");
    }else{
        printf("Empréstimo não aprovado, salário insuficiente.");
    }

    return 0;
}
