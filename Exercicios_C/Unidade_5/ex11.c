#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66*/

int main(){
    setlocale(LC_ALL, "");

    int num = 0, i = 0;

    printf("Dígite um número inteiro: ");
    scanf("%d", &num);

    if(num > 0){
        i = num;
        printf("Os divisores são: ");
        while(i > 0){
            if(num % i == 0){
                printf("%d ", i);
            }
            i--;
        }
    } else {
        printf("Número não positivo!");
    }


    return 0;
}
