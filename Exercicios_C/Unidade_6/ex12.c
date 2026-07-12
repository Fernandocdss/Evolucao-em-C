//Bibliotecas importadas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//Enunciado
/*Leia um conjunto de números reais, armazenando-o em vetor. Em seguida, calcule o quadrado de cada elemento desse vetor, armazenando esse resultado em
outro vetor.Os conjuntos têm, no máximo, 20 elementos. Imprima os dois conjuntos de números.
*/


//Função main
int main(void){
    //Alterado regras para português
    setlocale(LC_ALL, "");

    //Declaração das varíaveis
    double vetor[20] = {},vetor_ao_quadrado[20] = {}, quadrado = 0;
    int i = 0, tam_vet = 0;

    //Leitura do tamanho do vetor
    printf("Informe quantos valores terá o vetor: ");
    scanf("%d", &tam_vet);

    //Leitura dos valores contidos no vetor
    printf("Informe os valores do vetor: ");
    while(i < tam_vet){
        scanf("%lf", &vetor[i]);
        i++;
    }

    //Elevação dos valores do primeiro vetor e atribuído ao segundo vetor
    for(int j = 0; j < tam_vet; j++){
        vetor_ao_quadrado[j] = pow(vetor[j], 2);
    }

    //Impressão dos vetores
    printf("\nImpressão do primeiro vetor: ");
    for(int k = 0; k < tam_vet; k++){
        printf("%1.lf ", vetor[k]);
    }

    printf("\nImpressão do segundo vetor: ");
    for(int l = 0; l < tam_vet; l++){
        printf("%.1lf ", vetor_ao_quadrado[l]);
    }

    return 0;
}
