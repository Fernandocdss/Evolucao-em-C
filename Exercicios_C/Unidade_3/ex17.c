#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva um programa que leia um número inteiro e mostre a multiplicação
 e a divisão desse número por dois (utilize os operadores de deslocamento de bits).*/

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");

    int num = 0;

    scanf("%d", &num);

    printf("Complemento: %d\n", ~num);

    system("pause");

    return 0;
}