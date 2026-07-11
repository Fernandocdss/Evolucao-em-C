#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");
    float a = 0, b = 0, res;

    scanf("%f %f", &a, &b);
    res = sqrt(pow(a, 2) + pow(b, 2));

    printf("O valor da hipotenusa é: %.2f\n", res);
    system("pause");

    return 0;
}