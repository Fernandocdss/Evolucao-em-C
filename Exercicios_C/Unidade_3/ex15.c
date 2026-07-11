#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, centena, dezena, unidade, invertido;

    printf("Digite um numero inteiro positivo de 3 digitos: ");
    scanf("%d", &numero);

    // Separando os dígitos
    centena = numero / 100;
    dezena = (numero % 100) / 10;
    unidade = numero % 10;

    // Calculando o novo número invertido
    invertido = (unidade * 100) + (dezena * 10) + centena;

    printf("Numero invertido: %d\n", invertido);

    system("pause");
    return 0;
}
