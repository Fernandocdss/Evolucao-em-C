#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares.*/

int main(){
    setlocale(LC_ALL, "");
    int n = 0;

    printf("Informe um número: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            continue;
        }
        printf("%d\t", i);
    }

    return 0;
}
