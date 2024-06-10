#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a, i;
    float fat=1;
    printf("Digite um valor para saber seu fatorial:");
    scanf("%d", &a);
    printf("%d! = %d", a, a);

    for(i=a; i>1; i--){
        printf(" X %d", i-1);
            fat = fat * i;
    }

    printf(" = %.0f", fat);
    return 0;
}
