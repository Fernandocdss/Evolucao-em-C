#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");
    int idade = 0;

    printf("Informe a idade do nadador: ");
    scanf("%d", &idade);

    if(idade > 0){
        if(idade >= 5 && idade <= 7){
            printf("Infantil A\n");
        } else {
            if(idade >= 8 && idade <= 10){
                printf("Infantil B\n");
            } else {
                if(idade >= 11 && idade <= 13){
                    printf("Juvenil A\n");
                } else {
                    if(idade >= 14 && idade <= 17){
                        printf("Juvenil B\n");
                    } else {
                        printf("Maior de 18 anos!\n");
                    }
                }
            }
        }
    } else {
        printf("Informe uma idade válida!\n");
    }
    system("pause");

    return 0;
}