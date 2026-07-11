#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa 
diferente de imposto sobre o produto. Faça um programa em que o usuário entre com o valor e o 
estado de destino do produto e o programa retorne o preço final do produto acrescido do imposto 
do estado em que ele será vendido. Se o estado digitado não for válido, mostrará uma mensagem de erro.*/

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");
    int produto, op;
    float taxa = 0;

    printf("Informe o estado:\n1-MG\n2-SP\n3-RJ\n4-MS\n");
    scanf("%d", &op);
    printf("Informe o valor do produto: ");
    scanf("%d", &produto);

    switch (op){
        case 1:
            taxa = 107.0 / 100.0;
            printf("\n%d mais os impostos em MG ficam no valor de: %.2f\n", produto, produto * taxa);
            break;
        case 2:
            taxa = 112.0 / 100.0;
            printf("%d mais os impostos em SP ficam no valor de: %.2f\n", produto, produto * taxa);
            break;
        case 3:
            taxa = 115.0 / 100.0;
            printf("%d mais os impostos em RJ ficam no valor de: %.2f\n", produto, produto * taxa);
            break;
        case 4:
            taxa = 108.0 / 100.0;
            printf("%d mais os impostos em MS ficam no valor de: %.2f\n", produto, produto * taxa);
            break;
        default:
            printf("Erro!\n");
            break;
    }

    system("pause");

    return 0;
}