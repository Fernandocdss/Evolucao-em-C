#include <stdio.h>
#include <locale.h>

/*Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos valores maiores do que 10 ela possui.
*/

int main(void){
    setlocale(LC_ALL, "");

    int mat[4][4] = {}, maior = 0;

    printf("Informe os valores da matriz: ");
    for(int i = 0;i < 4;i++){
        for(int j = 0;j < 4;j++){
            scanf("%d", &mat[i][j]);
            if(mat[i][j] > 10){
                maior++;
            }
        }
    }

    printf("A matriz possui %d valores maiores que 10.", maior);

    return 0;
}
