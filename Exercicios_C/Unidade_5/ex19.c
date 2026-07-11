#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "");

    float soma = 0.0;

    for(int i = 1; i <= 50; i++){
        soma += (float)(2 * i - 1) / i;
    }

    printf("\nO valor de s é: %.1f", soma);

    return 0;
}
