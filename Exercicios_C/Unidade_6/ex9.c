#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que preencha um vetor com 10 números reais.
Em seguida, calcule e mostre na tela a quantidade de números negativos e a soma dos números positivos desse vetor.*/

int main(){
    setlocale(LC_ALL, "");

    float vet[10] = {}, negativos = 0, soma = 0;

    printf("Informe os valores: ");
    for(int i = 0; i < 10; i++){
        scanf("%f", &vet[i]);

        if(vet[i] < 0){
            negativos++;
        }

        if(vet[i] > 0){
            soma += vet[i];
        }
    }

    printf("Há %.1f números negativos no vetor.\nA soma dos números positivos é igual a %.1f.", negativos, soma);


    return 0;
}
