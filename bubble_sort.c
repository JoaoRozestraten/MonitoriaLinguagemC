#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define max 5  // Define o tamanho do vetor

int main() {
    setlocale(LC_ALL, "Portuguese"); // Suporte a acentos

    int vet[max];
    int i, j, temp, trocou;

    // Entrada de dados
    printf("Digite %d números:\n", max);
    for (i = 0; i < max; i++) {
        scanf("%d", &vet[i]);
    }

    // Algoritmo Bubble Sort
    do {
        trocou = 0;  // Variável para verificar se houve trocas

        for (i = 0; i < max - 1; i++) {
            if (vet[i] > vet[i + 1]) {
                // Troca os elementos se estiverem fora de ordem
                temp = vet[i];
                vet[i] = vet[i + 1];
                vet[i + 1] = temp;
                trocou = 1;  // Marca que houve troca
            }
        }
    } while (trocou);  // Continua ate nao ser mais 0 -> trocou!=0

    // Saída do vetor ordenado
    printf("\nVetor ordenado: ");
    for (i = 0; i < max; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}


