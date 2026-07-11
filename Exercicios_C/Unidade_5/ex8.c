#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que leia 10 inteiros e imprima sua média.*/

int main(){
    setlocale(LC_ALL, "");

    int num = 0, media = 0;

    printf("Informe os números: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &num);
        media += num;
    }
    printf("\nA média dos números lidos é: %.1f", (float)media / 10);


    return 0;
}
