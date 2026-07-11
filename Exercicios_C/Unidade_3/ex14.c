#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");
    char letra;
    
    scanf("%c", &letra);
    printf("%c\n", letra -= 32);
    
    system("pause");

    return 0;
}