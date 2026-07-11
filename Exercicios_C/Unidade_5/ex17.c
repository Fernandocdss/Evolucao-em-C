#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva um programa que leia um número inteiro positivo N e em seguida imprima N linhas do chamado triângulo de Floyd:
1
2 3
4 5 6
8 9 10
11 12 13 14 15
16 17 18 19 20 21*/

int main(void){
    setlocale(LC_ALL, "");

    int n = 0, aux = 0;

    printf("Informe quantas linhas terá o triângulo de Floyd: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1 ; j <= i; j++){
            aux += 1;
            printf("%3d ", aux);
        }
        printf("\n");
    }

    return 0;
}
