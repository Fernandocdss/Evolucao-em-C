#include <stdio.h>
#include <string.h>
#include <locale.h>

/*Faça um programa que leia uma string e a imprima de trás para a frente.
*/

int main(void){
    setlocale(LC_ALL, "");

    char nome[50];

    printf("Digíte uma palavra ou frase pra ser invertida: ");
    setbuf(stdin, NULL);
    fgets(nome, 50, stdin);

    int tamanho = strlen(nome);

    //Correção da quebra de linha novamente
    if (tamanho > 0 && nome[tamanho - 1] == '\n') {
        nome[tamanho - 1] = '\0';
        tamanho--; // Atualiza o tamanho já que tiramos um caractere
    }

    //Correção da atribuição de i devido strlen pegar o ultimo caractere que seria o \0 e não seria impresso corretamente.
    for(int i = tamanho - 1; i >= 0; i--){
        printf("%c", nome[i]);
    }

    return 0;
}
