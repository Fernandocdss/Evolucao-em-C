#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na tela os valores lidos na ordem inversa.

int main(void){
    setlocale(LC_ALL, "");

    int vet[6];

    printf("Informe os valores: ");
    for(int i = 0; i < 6; i++){
        scanf("%d", &vet[i]);
    }

    for(int j = 5; j >= 0; j--){
        printf("%d ", vet[j]);
    }
    return 0;
}
