#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que leia uma string e imprima as quatro primeiras letras dela.
*/

int main(void){
    setlocale(LC_ALL, "");

    char nome[30];

    printf("Digite seu nome: ");
    setbuf(stdin, NULL);
    fgets(nome, 30, stdin);

    for(int i = 0; i < 4; i++){
        printf("%c", nome[i]);
    }

    return 0;
}
