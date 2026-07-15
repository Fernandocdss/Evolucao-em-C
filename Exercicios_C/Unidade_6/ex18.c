#include <stdio.h>
#include <locale.h>

/*Faça um programa que declare uma matriz de tamanho 5 × 5. Preencha com 1 a diagonal principal e com 0 os demais elementos.
Ao final, escreva a matriz obtida na tela.
*/

int main(void){
    setlocale(LC_ALL, "");

    int mat[5][5] = {};

    for(int i = 0;i < 5;i++){
        for(int j = 0;j < 5;j++){
            if(i == j){
                mat[i][j] = 1;
            } else {
                mat[i][j] = 0;
            }
        }
    }

    for(int i = 0;i < 5;i++){
        for(int j = 0;j < 5;j++){
            printf("%d ", mat[i][j]);
            if(j == 4){
                printf("\n");
            }
        }
    }

    return 0;
}
