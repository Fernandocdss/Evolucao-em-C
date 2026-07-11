#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que possua um array de nome A que armazene seis números inteiros. O programa deve executar os seguintes passos:
a) Atribua os seguintes valores a esse array: 1, 0, 5, –2, –5, 7.
b) Armazene em uma variável a soma dos valores das posições A[0], A[1] e A[5] do array e mostre na tela essa soma.
c) Modifique o array na posição 4, atribuindo a essa posição o valor 100.
d) Mostre na tela cada valor do array A, um em cada linha.
*/
int main(void){
    setlocale(LC_ALL, "");

    int vet[6] = {1,0,5,-2,-5,7}, soma = 0;

    soma = vet[0] + vet[1] + vet[5];

    printf("A soma das posições 1, 2 e 5 do vetor é: %d\n", soma);

    vet[4] = 100;

    for(int i = 0; i < 6; i++){
        printf("%d\n", vet[i]);
    }


    return 0;
}
