#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
• O número digitado ao quadrado.
• A raiz quadrada do número digitado.*/

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");

    int num = 0;
    printf("Digite um número:");
    scanf("%d", &num);

    if (num  > 0){
        printf("%d ao quadrado é igual a: %.2f\n",num , pow(num, 2));
        printf("A raiz quadrada de %d é igual a: %.2f\n",num, sqrt(num));
    } else {
        printf("Número negativo!!\n");
    }

    system("pause");

    return 0;
}