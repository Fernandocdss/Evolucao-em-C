#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que leia uma matriz de tamanho 4 × 4. Imprima na tela o maior valor contido nessa matriz e a sua localização (linha e coluna).
*/

int main(void){
    setlocale(LC_ALL, "");

    int mat[4][4] = {}, maior = 0, linha= 0, coluna = 0;

    printf("Informe os valores da matriz:\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &mat[i][j]);
            if(mat[i][j] > maior){
                maior = mat[i][j];
                linha = i;
                coluna = j;
            }
        }
    }

    printf("\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", mat[i][j]);
            if(j == 3){
                printf("\n");
            }
        }
    }

    printf("\nO maior valor da matriz é %d, e sua posição é [%d][%d]", maior, linha, coluna);

    return 0;
}
