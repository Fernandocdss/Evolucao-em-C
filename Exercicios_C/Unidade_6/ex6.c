#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva um programa que leia do teclado um vetor de 10 posições. Escreva na tela quantos valores pares foram armazenados nesse vetor.*/

int main(){
    setlocale(LC_ALL, "");

    int vet[10] = {}, pares = 0;

    printf("Informe os valores: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &vet[i]);
        if(vet[i] % 2 == 0){
            pares ++;
        }
    }

    printf("Foram armazenados %d valores pares!", pares);


    return 0;
}
