#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double raio = 0;

    scanf("%lf", &raio);
    printf("Area do circulo = %.2lf\n", ((3.141592 * pow(raio, 2) / 1000)));
    system("pause");

    return 0;
}