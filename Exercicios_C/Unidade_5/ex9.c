#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido*/

int main(){
    setlocale(LC_ALL, "");

    int i = 0, num = 0, maior = 0, menor = 0;

    printf("Dígite os números: ");
    while(i < 10){
        scanf("%d", &num);
        if(num > maior){
            maior = num;
        }

        if(i == 0){
            menor = num;
        }

        if(num < menor){
            menor = num;
        }
        i++;
    }

    printf("Maior número digitado: %d\nMenor número digitado: %d", maior, menor);
    return 0;
}
