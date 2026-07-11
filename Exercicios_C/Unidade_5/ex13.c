#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que exiba a soma de todos os números naturais abaixo de 1.000 que são múltiplos de 3 ou 5.
*/

int main(){
    setlocale(LC_ALL, "");

    int soma = 0;

    for(int i = 0; i < 1000; i++){
        if(i % 3 == 0 || i % 5 == 0){
            soma += i;
        }
    }

    printf("A soma dos números naturais abaixo de 1000 é : %d", soma);

    return 0;
}
