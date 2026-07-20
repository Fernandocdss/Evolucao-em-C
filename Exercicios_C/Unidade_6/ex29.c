#include <stdio.h>
#include <locale.h>

#define TAM 5

/*Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule a soma dos elementos dessa matriz que pertencem à diagonal principal ou secundária.
Calcule também a soma dos elementos que não pertencem a nenhuma das duas diagonais. Imprima na tela a diferença entre os dois valores.
*/

int main(void){
    setlocale(LC_ALL, "");

    int mat[TAM][TAM] = {0}, soma_diagonais = 0, soma_nao_diagonais = 0, diferenca = 0;

    printf("Informe os valores da matriz:\n");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("[%d][%d] : ", i, j);
            scanf("%d", &mat[i][j]);

            if((i + j != TAM - 1) && i != j){
                soma_nao_diagonais += mat[i][j];
            } else {
                soma_diagonais += mat[i][j];
            }
        }
    }

    diferenca = soma_nao_diagonais - soma_diagonais;

    printf("\nA soma dos valores da diagonal principal e secundária é: %d"
           "\nA soma dos valores fora da diagonal principal e fora da diagonal secundaria é : %d"
           "\nA diferença entre a soma das diagonais e a soma dos valores fora das diagonais é %d", soma_diagonais, soma_nao_diagonais, diferenca);

    return 0;
}
