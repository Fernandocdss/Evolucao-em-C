#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

#define TAMANHO 10

/*Faça um programa para ler 10 números diferentes a serem armazenados em um vetor. Os números deverão ser armazenados no vetor na ordem em que forem lidos,
sendo que, caso o usuário digite um número que já foi digitado, o programa deverá pedir a ele para digitar outro número.
Note que cada valor digitado pelo usuário deve ser pesquisado no vetor,verificando se ele existe entre os números que já foram fornecidos.
Exiba na tela o vetor final que foi digitado.
*/

int main(){
    setlocale(LC_ALL, "");
    #include <stdio.h>

    int vetor[TAMANHO];
    int i, j, numero;
    bool repetido;

    printf("Digite %d numeros diferentes:\n", TAMANHO);

    for (i = 0; i < TAMANHO; ) {
        printf("Posicao [%d]: ", i + 1);
        scanf("%d", &numero);

        // Inicializa a flag que indica se o número é repetido
        repetido = false;

        // Varre o vetor apenas até as posições que já foram preenchidas (i)
        for (j = 0; j < i; j++) {
            if (vetor[j] == numero) {
                repetido = true;
                break; // Se achou um igual, não precisa continuar procurando
            }
        }

        // Se o número não for repetido, adiciona ao vetor e avança o índice
        if (!repetido) {
            vetor[i] = numero;
            i++; // Só incrementa o 'i' aqui!
        } else {
            printf("Esse numero ja foi digitado. Tente outro!\n");
        }
    }

    // Exibe o vetor final
    printf("\nVetor final digitado:\n[ ");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }
    printf("]\n");

    return 0;
}
