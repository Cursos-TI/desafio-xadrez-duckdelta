#include <stdio.h>

// Desafio de Xadrez - MateCheck

int main() {
    // Movimento da Torre: 5 casas para a Direita (usando FOR)
    int movimentoTorre = 5;
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do Bispo: 5 casas na Diagonal (Cima + Direita) (usando WHILE)
    int movimentoBispo = 0;
    printf("Movimento do Bispo (5 casas na Diagonal Cima Direita):\n");
    while (movimentoBispo < 5) {
        printf("Cima Direita\n");
        movimentoBispo++;
    }
    printf("\n");

    // Movimento da Rainha: 8 casas para a Esquerda (usando DO-WHILE)
    int movimentoRainha = 0;
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    do {
        printf("Esquerda\n");
        movimentoRainha++;
    } while (movimentoRainha < 8);
    printf("\n");

    return 0;
}
