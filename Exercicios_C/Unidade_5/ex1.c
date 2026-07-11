#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");

    int n = 0, i = 0;

    printf("Informe um número: ");
    scanf("%d", &n);

    while(i != n + 1){
        printf("%d\t", i);
        i++;
    }

    return 0;
}
