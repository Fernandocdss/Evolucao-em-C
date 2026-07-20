#include <stdio.h>
#include <locale.h>

/*Leia uma matriz de tamanho 10 × 3 com as notas de 10 alunos em três provas. Em seguida, calcule e escreva na tela o número de alunos
cuja pior nota foi na prova 1, o número de alunos cuja pior nota foi na prova 2 e o número de alunos cuja pior nota foi na prova 3.
*/

int main(void){
    setlocale(LC_ALL, "");

    double mat[10][3] = {0};
    int pior_nota_p1 = 0, pior_nota_p2 = 0, pior_nota_p3 = 0;

    printf("Informe os valores da matriz: ");
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 3; j++){
            printf("[%d][%d] : ", i, j);
            scanf("%lf", &mat[i][j]);
        }
        if(mat[i][0] <= mat[i][1] && mat[i][0] <= mat[i][2]){
            pior_nota_p1++;
        } else if(mat[i][1] <= mat[i][2]){
            pior_nota_p2++;
        } else {
            pior_nota_p3++;
        }
    }


    printf("\n%d alunos tiraram a pior nota na P1\n%d alunos tiraram a pior nota na P2\n%d alunos tiraram a pior nota na P3", pior_nota_p1, pior_nota_p2, pior_nota_p3);

    return 0;
}
