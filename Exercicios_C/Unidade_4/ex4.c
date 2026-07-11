#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*4) Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação:
• For maior que 20% do salário, imprima: “Empréstimo não concedido.”
• Caso contrário, imprima: “Empréstimo concedido.”*/

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");

    float salario = 0, prestacao = 0, percent_salario = 0;

    scanf("%f %f", &salario, &prestacao);

// if (prestacao < salario * 20 / 100){
//     printf("Empréstimo concedido!\n");
// } else {
//     printf("Empréstimo não concedido!\n");
// }

    (prestacao < salario * 0.2) ? printf("Empréstimo concedido!\n") : printf("Empréstimo não concedido!\n");

    system("pause");

    return 0;
}