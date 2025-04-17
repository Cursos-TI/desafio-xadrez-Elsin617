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

    // CAVALO - Movimento em "L": duas casas para BAIXO e uma para a ESQUERDA
    const int passosBaixo = 2;
    const int passosEsquerda = 1;

    printf("\nMovimento do Cavalo:\n");

    // Loop externo com FOR para controlar as duas etapas do movimento
    for (int etapa = 1; etapa <= 2; etapa++) {
        // Etapa 1: mover duas casas para baixo usando WHILE
        if (etapa == 1) {
            int j = 0;
            while (j < passosBaixo) {
                printf("Baixo\n");
                j++;
            }
        }
        // Etapa 2: mover uma casa para a esquerda usando DO-WHILE
        else if (etapa == 2) {
            int k = 0;
            do {
                printf("Esquerda\n");
                k++;
            } while (k < passosEsquerda);
        }
    }

    return 0;
}