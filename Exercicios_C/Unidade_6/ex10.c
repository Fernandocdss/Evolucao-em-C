#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que receba do usuário dois arrays, A e B, com 10 números inteiros cada.
Crie um novo array C calculando C = A – B. Mostre na tela os dados do array C.
*/

int main(void){
    setlocale(LC_ALL, "");

    int a[5] = {}, b[5] = {}, c[5] = {};

    printf("Informe os valores do vetor A: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }

    printf("Informe os valores do vetor B: ");
    for(int j = 0; j < 5; j++){
        scanf("%d", &b[j]);
    }

    for(int k = 0; k < 5; k++){
        printf("%d ", c[k] = a[k] - b[k]);
    }

    return 0;
}
