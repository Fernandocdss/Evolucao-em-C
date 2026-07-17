#include <stdio.h>
#include <locale.h>

/*Faça um programa que permita ao usuário entrar com uma matriz de tamanho 3 × 3 de números inteiros.
Em seguida, calcule um vetor contendo três posições, em que cada posição deverá armazenar a soma dos números de cada coluna da matriz.
Exiba na tela esse array. Por exemplo, a matriz
*/

int main(void){
    setlocale(LC_ALL, "");

    int mat[3][3] = {0}, vet[3] = {0}, col1 = 0, col2 = 0, col3 = 0;

    printf("Informe os valores pra preencher a matriz:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("[%d][%d] : ", i, j);
            scanf("%d", &mat[i][j]);
            vet[j] += mat[i][j];
        }
    }

    printf("Matriz preenchida:\n");
    for(int k = 0; k < 3; k++){
        for(int l = 0; l < 3; l++){
            printf("%d\t", mat[k][l]);
        }
        printf("\n");
    }

    printf("Vetor preenchido:\n");
    for(int m = 0; m < 3; m++){
        printf("[%d] ", vet[m]);
    }


    return 0;
}
