#include <stdio.h>

// Função recursiva para o movimento da Torre (horizontal - direita)
void moverTorre(int casasRestantes) {
    if (casasRestantes <= 0) return;

    printf("Direita\n");
    moverTorre(casasRestantes - 1); // Chamada recursiva reduzindo uma casa
}

// Função recursiva com loops aninhados para o Bispo (diagonal - cima direita)
void moverBispo(int casasVerticais, int casasHorizontais) {
    if (casasVerticais <= 0 || casasHorizontais <= 0) return;

    // Loop interno simula o movimento horizontal
    for (int i = 0; i < casasHorizontais; i++) {
        printf("Diagonal Direita (Cima)\n");
    }

    // Chamada recursiva reduzindo o número de movimentos verticais
    moverBispo(casasVerticais - 1, casasHorizontais);
}

// Função recursiva para o movimento da Rainha (horizontal - esquerda)
void moverRainha(int casasRestantes) {
    if (casasRestantes <= 0) return;

    printf("Esquerda\n");
    moverRainha(casasRestantes - 1); // Chamada recursiva
}

// Movimento complexo do Cavalo (duas casas para cima, uma para direita)
// usando loops aninhados, múltiplas variáveis e condições
void moverCavalo(int movimentos) {
    printf("\nMovimento do Cavalo:\n");

    // Loop externo controla a quantidade de movimentos em L
    for (int i = 0; i < movimentos; i++) {
        // Loop interno simula duas subetapas: cima e direita
        for (int j = 0; j < 3; j++) {
            if (j < 2) {
                printf("Cima\n"); // Duas casas para cima
                if (j == 1 && i % 2 == 0) continue; // Pula para a próxima iteração se for par
            } else {
                printf("Direita\n"); // Uma casa para a direita
                if (i == movimentos - 1) break; // Sai do loop se for o último movimento
            }
        }
    }
}

int main() {
    // Definição fixa de quantas casas cada peça vai se mover
    const int casasTorre = 5;
    const int casasBispoVertical = 3;
    const int casasBispoHorizontal = 2;
    const int casasRainha = 8;
    const int movimentosCavalo = 3;

    // Saída dos movimentos da Torre
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // Saída dos movimentos do Bispo
    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispoVertical, casasBispoHorizontal);

    // Saída dos movimentos da Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // Saída dos movimentos do Cavalo
    moverCavalo(movimentosCavalo);

    return 0;
}

