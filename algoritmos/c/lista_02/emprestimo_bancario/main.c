#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float valor, salario, vparcelas;
    int nparcelas;
    printf("Digite o seu sal�rio: ");
    scanf("%f", &salario);
    printf("Digite o valor do empr�stimo: ");
    scanf("%f", &valor);
    printf("Digite o n�mero de parcelas: ");
    scanf("%i", &nparcelas);
    vparcelas = valor/nparcelas;
    if(vparcelas <= salario*0.3){
        printf("Empr�stimo aprovado! ");
    }else{
        printf("Empr�stimo n�o aprovado, sal�rio insuficiente.");
    }

    return 0;
}
