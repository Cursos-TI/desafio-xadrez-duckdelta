#include <stdio.h>

// Desafio de Xadrez - MateCheck

// Função recursiva para a Torre
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// Função recursiva para a Rainha
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// Função recursiva para o Bispo
void moverBispo(int casasRestantes) {
    if (casasRestantes == 0) return;

    for (int v = 0; v < 1; v++) {
        for (int h = 0; h < 1; h++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(casasRestantes - 1);
}

// Movimento do Cavalo
void moverCavalo() {
    int casasParaCima = 2;
    int casasParaDireita = 1;

    printf("Movimento do Cavalo (2 casas para Cima e 1 para Direita):\n");

    // Loop para as casas verticais (Cima)
    for (int i = 0; i < casasParaCima; i++) {
        printf("Cima\n");
    }

    // Loop para a casa horizontal (Direita)
    for (int j = 0; j < casasParaDireita; j++) {
        printf("Direita\n");
    }

    printf("\n");
}

int main() {
    // Torre
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas para a Direita):\n");
    moverTorre(casasTorre);
    printf("\n");

    // Bispo
    int casasBispo = 5;
    printf("Movimento do Bispo (5 casas na Diagonal Cima Direita):\n");
    moverBispo(casasBispo);
    printf("\n");

    // Rainha
    int casasRainha = 8;
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    moverRainha(casasRainha);
    printf("\n");

    // Cavalo
    moverCavalo();

    return 0;
}
