#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");
    int x = 0, y = 0, z = 0, op = 0;

    while (op != 5){
        system("cls");
        printf("\nQual cálculo deseja efetuar:\n1-x * y * z\n2-(x + (2 * y) + (3 * z)) / 6"
            "\n3-1 / ((1 / x) + (1 / y) + (1 / z))\n4-(x + y + z) / 3\n5-Sair\n");
        scanf("%d", &op);

        if(op == 5){
            break;
        }

        printf("Informe os valores dos números:\n");
        scanf("%d %d %d", &x, &y, &z);

        switch (op){
            case 1:
            printf("x * y * z = %d\n", x * y * z);
            system("pause");
            break;
            case 2:
            printf("(x + (2 * y) + (3 * z)) / 6 = %d\n", (x + (2 * y) + (3 * z)) / 6);
            system("pause");
            break;
            case 3:
            printf("1 / ((1 / x) + (1 / y) + (1 / z)) = %.2f\n", (float)1 / ((1 / x) + (1 / y) + (1 / z)));
            system("pause");
            break;
            case 4:
            printf("(x + y + z) / 3 = %.2f\n", (float)(x + y + z) / 3);
            system("pause");
            break;
        }

    }

    return 0;
}