/*Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro.
O volume de um cilindro circular é calculado por meio da seguinte fórmula: (pi * raio ^2 * altura)
em que π = 3.141592*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    double raio = 0, altura = 0;

    scanf("%lf", &raio);
    scanf("%lf", &altura);

    printf("Volume do cilindro circular = %.4lf\n", (3.141592 * (pow(raio, 2) * altura)));
    system("pause");

    return 0;
}