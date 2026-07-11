#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");
    float altura = 0, peso = 0;

    printf("Informe a altura em metros: ");
    scanf("%f", &altura);
    printf("Informe o peso em kg: ");
    scanf("%f", &peso);

    if(altura < 1.2){
        if(peso <= 60){
            printf("Cat A\n");
        } else {
            if(peso > 60 && peso < 90){
                printf("Cat D\n");
            } else {
                if(peso > 90){
                    printf("Cat G\n");
                }
            }
        }
    } else {
        if(altura >= 1.2 && altura < 1.71){
            if(peso <= 60){
                printf("Cat B\n");
            } else {
                if(peso > 60 && peso < 90){
                    printf("Cat E\n");
                } else {
                    if(peso > 90){
                        printf("Cat H\n");
                    }
                }
            }
        } else {
            if(altura > 1.7){
                if(peso <= 60){
                    printf("Cat C\n");
                } else {
                    if(peso > 60 && peso < 90){
                        printf("Cat F\n");
                    } else {
                        if(peso > 90){
                            printf("Cat I\n");
                        }
                    }
                }
            } 
        }
    }
    system("pause");
    return 0;
}