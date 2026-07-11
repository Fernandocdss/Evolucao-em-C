#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 0;

    scanf("%d", &num);

    system("cls");
    printf("Antecessor de 2: %d\nSucessor de 2: %d\n", num - 1, num + 1);
    system("pause");
    return 0;
}