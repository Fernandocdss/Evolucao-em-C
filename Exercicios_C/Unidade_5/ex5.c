#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/

int main(){
    setlocale(LC_ALL, "");

    int soma = 0;

    for(int i = 0; i <= 100; i++){
        if(i % 2 == 0){
            soma = soma + i;
            printf("%d\t", soma);
        }
    }
    printf("\nA soma dos 50 primeiros números pares é igual a %d", soma);

    return 0;
}
