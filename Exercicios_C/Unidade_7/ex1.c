#include <stdio.h>
#include <locale.h>

/*1) Faça um programa que leia uma string e a imprima na tela.
*/

int main(void){
    setlocale(LC_ALL, "");

    char nome[30] = {0};

    printf("Digite seu nome: ");
    fgets(nome, 30, stdin);
    //gets(nome);
    //scanf("%s", nome);

    printf("\nPrazer em te conhecer %s", nome);

    return 0;
}
