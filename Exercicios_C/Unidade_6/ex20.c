#include <stdio.h>
#include <locale.h>

/*Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos valores negativos ela possui.
*/

int main(void){
    setlocale(LC_ALL, "");

    int mat[4][4] = {}, negativo = 0;

    printf("Informe os valores da matriz:\n");
    for(int i = 0;i < 4;i++){
        for(int j = 0;j < 4;j++){
            printf("[%d][%d] ", i, j);
            scanf("%d", &mat[i][j]);
            if(mat[i][j] < 0){
                negativo++;
            }
        }
    }

    printf("\nA matriz possui %d valores negativos.", negativo);

    return 0;
}
