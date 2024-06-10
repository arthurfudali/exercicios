#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n = 0;
    int i, soma = 0;
    for(i=0; i<500; i++){
        if(i%2 != 0){
            if(i%3 == 0){
                    soma += i;
            }
        }
    }
    printf("%i", soma);

    return 0;
}
