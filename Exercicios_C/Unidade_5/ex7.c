#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elabore um programa que peça ao usuário para digitar 10 valores. Some esses valores e apresente o resultado na tela.
*/

int main(){
    setlocale(LC_ALL, "");

    int valor = 0, soma = 0;

    printf("Dígite 10 valores a serem somados: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &valor);
        soma += valor;
    }

    printf("A soma dos valores é igual a %d", soma);

    return 0;
}
