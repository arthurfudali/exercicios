#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, i;

    printf("Digite um valor para saber sua tabuada (1 a 10): ");
    scanf("%d", &n);
    if (n >= 1 && n<=10){
        for (i=0; i<=10; i++){
            printf("%d X %d = %d\n", i, n, i*n);
        }
    }
    else{
        printf("Digite um numero de um a 10");
    }
    return 0;
}
