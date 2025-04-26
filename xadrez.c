#include <stdio.h>

// Desafio de Xadrez - MateCheck
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Método de movimentação do cavalo
void mover_cavalo(){
    printf("MOVENDO CAVALO \n");

    // Movimentando na vertical
    for (int vertical = 1; vertical <= 2; vertical ++) {
        printf("Cima\n");
    }
    // Movimentando na horizontal
    printf("Direita\n\n");
}

// Método de movimentação da torre
void mover_torre(){
    printf("MOVENDO TORRE \n");
    // Loop dos movimentos da torre
    for (int movimento = 1; movimento <= 5; movimento++) {
        printf("Direita\n");
    }
    // pulando uma linha
    printf("\n");
}

// Método de movimentação do bispo
void mover_bispo(){
    printf("MOVENDO BISPO \n");
    // Loop dos movimentos do bispo
    for (int movimento = 1; movimento <= 5; movimento++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    // pulando uma linha
    printf("\n");
}

// Método de movimentação da rainha
void mover_rainha(){
    printf("MOVENDO RAINHA \n");
    // Loop dos movimentos da torre
    for (int movimento = 1; movimento <= 8; movimento++) {
        printf("Esquerda\n");
    }
    // pulando uma linha
    printf("\n");
}

int main() {
    // chamando todos os movimentos
    mover_bispo();
    mover_torre();
    mover_cavalo();
    mover_rainha();

    return 0;
}
