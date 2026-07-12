#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros números naturais que não são múltiplos de 7.
Ao final, imprima esse vetor na tela..
*/

int main(void){
    setlocale(LC_ALL, "");

    int vet[100] = {}, posicao = 0, numero = 1;

    while(posicao < 100){
        if(numero % 7 != 0){
            vet[posicao] = numero;
            posicao++;
        }
        numero++;
    }

    printf("Os múltiplos de 7 são: ");
    for(int j = 0; j < 100; j++){
        //if(vet[j] != 0){
        printf("%d ", vet[j]);
        //}
    }


    return 0;
}
