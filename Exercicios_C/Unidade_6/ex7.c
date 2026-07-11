#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que receba do usuário um vetor X com 10 posições. Em seguida deverão ser impressos o maior e o menor elemento desse vetor.*/

int main(){
    setlocale(LC_ALL, "");

    int vet[10] = {}, maior = 0, menor = 0;

    printf("Informe os valores: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &vet[i]);

        if(i == 0){
            menor = vet[i];
        }

        if(vet[i] > maior){
            maior = vet[i];
        }
        if(vet[i] < menor){
            menor = vet[i];
        }
    }

    printf("Maior valor do vetor: %d\nMenor valor do vetor %d", maior, menor);


    return 0;
}
