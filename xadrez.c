#include <stdio.h>

// Desafio de Xadrez - MateCheck

int main() {
    // Movimento da Torre
    int movimentoTorre = 5;
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do Bispo
    int movimentoBispo = 0;
    printf("Movimento do Bispo (5 casas na Diagonal Cima Direita):\n");
    while (movimentoBispo < 5) {
        printf("Cima Direita\n");
        movimentoBispo++;
    }
    printf("\n");

    // Movimento da Rainha
    int movimentoRainha = 0;
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    do {
        printf("Esquerda\n");
        movimentoRainha++;
    } while (movimentoRainha < 8);
    printf("\n");

    // Movimento do Cavalo
    int casasBaixo = 2;
    int casasEsquerda = 1;

    printf("Movimento do Cavalo (2 casas para Baixo e 1 para Esquerda):\n");

    for (int i = 0; i < 1; i++) {
        int contadorBaixo = 0;

        while (contadorBaixo < casasBaixo) {
            printf("Baixo\n");
            contadorBaixo++;
        }

        printf("Esquerda\n");
    }

    return 0;
}
