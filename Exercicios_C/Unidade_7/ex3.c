#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Sem usar a função strlen(), faça um programa que leia uma string e imprima quantos caracteres ela possui.
*/

int main(void){
    setlocale(LC_ALL, "");

    char nome[30];
    int i = 0;

    printf("Digite seu nome: ");
    setbuf(stdin, NULL);
    fgets(nome, 30, stdin);

    while(nome[i] != '\0'){
        i++;
    }

    //Correção de contagem do \n feito pelo fgets
    if (i > 0 && nome[i - 1] == '\n') {
        nome[i - 1] = '\0';
        i--;
    }

    printf("A string possui %d caracteres.", i);
    return 0;
}
