#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores desse número,
com exceção dele próprio. Exemplo: A soma dos divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.
*/

int main(){
    setlocale(LC_ALL, "");

    int num = 0, i = 0, soma = 0;

    printf("Dígite um número inteiro: ");
    scanf("%d", &num);

    if(num > 0){
        i = num;
        printf("Os divisores são: ");
        while(i > 0){
            if(num % i == 0){
                printf("%d ", i);
                if(i != num){
                    soma += i;
                }
            }
            i--;
        }
    } else {
        printf("\nNúmero não positivo!");
    }

    printf("\nA soma dos divisores de %d é: %d", num, soma);

    return 0;
}
