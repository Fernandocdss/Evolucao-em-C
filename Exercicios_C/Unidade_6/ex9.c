//Bibliotecas importadas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//Enunciado
/* Faça um programa que leia um vetor de 10 posições. Verifique se existem valores iguais e os escreva na tela.
*/


//Função main
int main(void){
    //Alterado regras para português
    setlocale(LC_ALL, "");

    //Declaração das varíaveis
    int vetor[5] = {}, aux = 0, j = 0;

    printf("Informe os valores do vetor: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
    }

    printf("\n");
    for(int i = 0; i < 5; i++){
        aux = vetor[i];
        while(j < 5){
            if(aux == vetor[j]){
                printf("%d ", aux);
            }
            j++;
        }
    }


    return 0;
}
