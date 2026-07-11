#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Em matemática, o número harmônico designado por Hn define-se como o enésimo termo da série harmônica. Ou seja:
Hn = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
Apresente um programa que calcule o valor de qualquer Hn.*/

int main(){
    setlocale(LC_ALL, "");

    int n = 0;
    float j = 2, Hn = 0;

    printf("Informe o valor do Hn: ");
    scanf("%d", &n);

    for(int i = 1; i < n; i++){
        if(i == 1){
            Hn = 1 + 1 / j;
        } else {
            Hn += 1 / j;
        }
        j++;
    }

    printf("\nHn de %d é igual: %.1f", n, Hn);

    return 0;
}
