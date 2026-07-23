#include <stdio.h>
#include <locale.h>

#define TAM 5

/*Faça um programa que leia uma matriz A de tamanho 5 × 5. Em seguida, calcule e imprima a matriz B, sendo que B = A2.
*/

int main(void){
    setlocale(LC_ALL, "");

    int a[TAM][TAM] = {0}, b[TAM][TAM] = {0};

    printf("Informe os valores da matriz: ");
    for(int i = 0;i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0;i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            b[i][j] = 0;
            for(int k = 0; k < TAM; k++){
                b[i][j] += a[i][k] * a[k][j];
            }
        }
    }

    printf("Matriz B:\n");
    for(int i = 0;i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }


    return 0;
}
