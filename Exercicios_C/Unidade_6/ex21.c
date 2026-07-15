#include <stdio.h>
#include <locale.h>

/*Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos valores contidos em sua diagonal principal.
*/

int main(void){
    setlocale(LC_ALL, "");

    int mat[3][3] = {}, soma = 0;

    printf("Informe os valores da matriz:\n");
    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 3;j++){
            printf("[%d][%d] ", i, j);
            scanf("%d", &mat[i][j]);
            if(i == j){
                soma += mat[i][j];
            }
        }
    }

    printf("\nA soma dos números na diagonal da matriz é igual a %d.", soma);

    return 0;
}
