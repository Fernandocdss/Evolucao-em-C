#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Faça um programa que leia cinco valores e os armazene em um vetor. Em seguida, mostre todos os valores lidos juntamente com a média dos valores.

int main(void){
    setlocale(LC_ALL, "");

    float media = 0, vet[5] = {};

    printf("Informe os valores: ");
    for(int i = 0; i < 5; i++){
        scanf("%f", &vet[i]);
        media = media + vet[i];
    }


    printf("\n");
    for(int j = 0; j < 5; j++){
        printf("%.1f ", vet[j]);
    }
    printf("\nA média dos valores é igual a %.1f", media / 5);

    return 0;
}
