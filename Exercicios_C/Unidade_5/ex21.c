#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "");
    int qtd_num = 0, num = 0, maior = 0, freq = 0;


    printf("Informe a quantidade de números a ser lida: ");
    scanf("%d", &qtd_num);

    printf("Informe os números: ");
    while(qtd_num > 0){
        scanf("%d", &num);
        if(num > maior){
            freq = 0;
            maior = num;
        }

        if(maior == num){
            freq++;
        }

        qtd_num--;
    }

    printf("\nO maior valor digitado foi %d, o mesmo foi lido %d vezes.", maior, freq);

    return 0;
}
