#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*Faça um programa que receba um número inteiro maior do que 1 e verifique se o número fornecido é primo ou não.*/

int main(void){
    setlocale(LC_ALL, "");

    int num = 2;
    char primo[30];

    printf("Dígite um número: ");

    while(num > 1){
        scanf("%d", &num);
        for(int i = 1; i <= num; i++){
            if((num % num == 1) && (num % i != 0)){
               strcpy(primo, "Número primo!");
            } else {
                strcpy(primo, "Não é número primo!");
            }
        }
        printf("%s", primo);
    }

    return 0;
}
