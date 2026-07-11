#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.*/

int main(){
    setlocale(LC_ALL, "");

    int num = 0, media = 0, i = 0;

    printf("Dígite os números: ");

    do{
        scanf("%d", &num);
        if(num > 0){
            media += num;
        }
        i++;
    } while (i < 10);

    printf("Média = %.2f", (float)media / 10);

    return 0;
}
