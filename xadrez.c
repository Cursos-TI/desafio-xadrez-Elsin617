#include <stdio.h>

int main() {
    // TORRE - Movimenta-se 5 casas para a DIREITA usando FOR
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // BISPO - Movimenta-se 5 casas na diagonal para CIMA DIREITA usando WHILE
    int casasBispo = 5;
    int i = 0;
    printf("\nMovimento do Bispo:\n");
    while (i < casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // RAINHA - Movimenta-se 8 casas para a ESQUERDA usando DO-WHILE
    int casasRainha = 8;
    i = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        i++;
    } while (i < casasRainha);

    return 0;
}