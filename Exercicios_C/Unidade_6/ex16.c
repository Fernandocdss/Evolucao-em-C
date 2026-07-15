#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que leia uma matriz de tamanho 3 × 3. Imprima na tela o menor valor contido nessa matriz.
*/

int main(void){
    setlocale(LC_ALL, "");

    int mat[3][3] = {}, menor = 0;

    printf("Informe os valores da matriz:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &mat[i][j]);
            if(i == 0 && j == 0){
                menor = mat[i][j];
            }
            if(mat[i][j] < menor){
                menor = mat[i][j];
            }
        }
    }

    printf("\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", mat[i][j]);
            if(j == 2){
                printf("\n");
            }
        }
    }

    printf("\nO menor valor da matriz é %d", menor);

    return 0;
}
