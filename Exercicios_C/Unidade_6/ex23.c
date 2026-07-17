#include <stdio.h>
#include <locale.h>

#define TAM 10

/*Calcular e imprimir na tela uma matriz de tamanho 10 × 10, em que seus elementos são da forma: se i < j :(2 * i)+(7 * j) - 2
se i == j: (3 * i^2 - 1)
se i > j: (4 * i^3) + (5 * j^2) + 1))
*/

int main(void){
    setlocale(LC_ALL, "");

    int mat[TAM][TAM] = {0};

    for(int i = 0;i < TAM;i++){
        for(int j = 0;j < TAM;j++){
            if(i < j){
                mat[i][j] = (2 * i)+(7 * j) - 2;
            } else if(i == j){
                mat[i][j] = (3 * (i * i) - 1);
            } else {
                mat[i][j] = (4 * (i * i * i)) + (5 * (j * j) + 1);
            }
        }
    }

    printf("Impressão da matriz:\n");
    for(int k = 0;k < TAM;k++){
        for(int l = 0;l < TAM;l++){
             printf("[%d][%d] = %d\n", k, l, mat[k][l]);
        }
    }

    return 0;
}
