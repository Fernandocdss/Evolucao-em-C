#include <stdio.h>
#include <locale.h>

#define TAM 5

/*Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule e imprima a soma dos elementos dessa matriz que estão acima da diagonal principal.
*/

int main(void){
    setlocale(LC_ALL, "");

    int mat[TAM][TAM] = {0}, soma = 0;

    printf("Informe os valores da matriz: ");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("[%d][%d] : ", i, j);
            scanf("%d", &mat[i][j]);

            if(i < j){
                soma += mat[i][j];
            }
        }
    }

    printf("A soma dos valores acima da diagonal principal é : %d", soma);



    return 0;
}
