#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elabore um programa que faça a leitura de vários números inteiros até que se digite um número negativo.
O programa tem de retornar o maior e o menor número lido.*/

int main(void){
    setlocale(LC_ALL, "");

    int num = 0, maior = 0, menor = -1;

    printf("Dígite os números: ");
    while(num >= 0){
        scanf("%d", &num);
        if(menor == -1){
            menor = num;
        }

        if(num > maior){
            maior = num;
        }

        if(num < menor && num > 0){
            menor = num;
        }
    }

    printf("\nMenor: %d\nMaior: %d", menor, maior);

    return 0;
}
