#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):
• Homens: (72,7 * h) – 58
• Mulheres: (62,1 * h) – 44,7*/

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");

    float altura = 0;
    char sexo;

    printf("Informe o sexo e a altura em metros: ");
    scanf("%c %f", &sexo, &altura);

    switch (sexo){
        case 'h':
            printf("Peso masculino ideal: %f\n", ((72.7 * altura) - 58));
            break;
        case 'm':
            printf("Peso feminino ideal: %f\n", ((62.1 * altura) - 44.7));
            break;
        default:
            printf("Sexo inválido!!\n");
    }

    system("pause");

    return 0;
}