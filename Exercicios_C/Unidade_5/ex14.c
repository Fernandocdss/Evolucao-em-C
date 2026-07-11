#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. Imprima o enésimo termo da sequência de Fibonacci.
  Essa sequência começa no termo de ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos anteriores.
  Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.
*/

int main(){
    setlocale(LC_ALL, "");

    int num = 0, fibo = 0;

    printf("Informe um número: ");
    scanf("%d", &num);

    if(num >= 0){
        for(int i = 0; i < num; i++){
            if(i <= 1){
                printf("%d ", i);
            } else {
                fibo = (i - 1) + (i - 2);
                printf("%d ", fibo);
            }
        }
    } else {
        printf("Número negativo!");
    }

    return 0;
}
