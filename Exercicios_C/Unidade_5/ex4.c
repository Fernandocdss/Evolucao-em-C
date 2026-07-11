#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0.*/

int main(){
    setlocale(LC_ALL, "");

    for(int i = 0; i < 19; i += 3){
        if((i % 3 == 0) && (i > 0)){
            printf("%d", i);
        }
    }

    return 0;
}
