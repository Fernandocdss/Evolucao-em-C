#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Leia um vetor com 10 números de ponto flutuante. Em seguida, ordene os elementos desse vetor e imprima o vetor na tela.
*/

int main(void){
    setlocale(LC_ALL, "");

    float vet[10] = {}, aux = 0;

    printf("Informe os valores do vetor:\n");
    for(int i = 0;i < 10; i++){
        printf("%d° ", i + 1);
        scanf("%f", &vet[i]);

        for(int k = 0;k < i;k++){
            if(vet[k] > vet[i]){
                aux = vet[k];
                vet[k] = vet[i];
                vet[i] = aux;
            }
        }
    }

    printf("\nVetor ordenado: ");
    printf("[");
    for(int j = 0;j < 10; j++){
        printf(" %.1f  ", vet[j]);
    }
    printf("]");

    return 0;
}
