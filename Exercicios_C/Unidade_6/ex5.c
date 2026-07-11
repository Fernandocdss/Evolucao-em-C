#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que leia um vetor de oito posições. Em seguida, leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor.
Seu programa deverá exibir a soma dos valores encontrados nas respectivas posições X e Y.*/

int main(){
    setlocale(LC_ALL, "");
    int vet[8] = {}, x = 0, y = 0, soma = 0;

    printf("Informe os valores: ");
    for(int i = 0; i < 8; i++){
        scanf("%d", &vet[i]);
    }

    here:
    printf("\nInforme os valores de x e y: ");
    scanf("%d %d", &x, &y);

    if((x >= 0 && x < 8) && (y >= 0 && y <= 8)){
        soma = vet[x] + vet[y];
    } else {
        printf("Informe um valor válido para x e y: ");
        goto here;
    }

    printf("\nA soma dos valores das posições %d e %d do vetor é %d", x, y, soma);

    return 0;
}
