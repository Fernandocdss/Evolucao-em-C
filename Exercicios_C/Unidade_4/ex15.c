#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");
    float a = 0, b = 0, c = 0, delta = 0;

    printf("Informe os valores dos coeficientes: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a == 0){
        printf("Não é uma equação do segundo grau!\n");
        system("pause");
        return 1;
    }

    delta = (pow(b, 2)) - (4 * a * c);
    printf("%.2f", delta);

    if(delta < 0){
        printf("\nNão existe raiz real!\n");
    } else {
        if(delta == 0){
            printf("\nExiste uma raiz real\nDelta = %.2f\n", ((-b) + sqrt(delta)) / (2 * a));
        } else {
            if(delta > 0){
                printf("\nExistem duas raízes reais\nX1 = %.2f\nX2 = %.2f\n", ((-b) + sqrt(delta)) / (2 * a), ((-b) - sqrt(delta)) / (2 * a));
            }
        }
    }

    return 0;
}
