#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente.*/

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");
    int num = 0;

    printf("Informe um valor inteiro: ");
    scanf("%d", &num);

    while (num > -1){
        printf("%d\t", num--);
    }

    return 0;
}
