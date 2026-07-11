#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "");

    int n = 0, fat = 1;
    float e = 0;

    printf("Informe um valor para n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = i; j > 0; j--){
            fat = fat * j;
        }
        printf("%d\t", fat);
        e += (float)1 / fat;
        fat = 1;
    }

    printf("\nO resultado de E é: %.3f", e);

    return 0;
}
