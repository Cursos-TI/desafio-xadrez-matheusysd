#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Definindo constantes para o número de casas
    const int TORRE_CASAS = 5;   // Torre move 5 casas
    const int BISPO_CASAS = 5;   // Bispo move 5 casas
    const int RAINHA_CASAS = 8;  // Rainha move 8 casas

    // Movimento da Torre (usando for) - 5 casas para direita
    printf("\nMovimento da Torre:\n");
    for (int i = 0; i < TORRE_CASAS; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo (usando while) - 5 casas diagonal superior direita
    printf("\nMovimento do Bispo:\n");
    int casasBispo = 0;
    while (casasBispo < BISPO_CASAS) {
        printf("Cima, Direita\n");
        casasBispo++;
    }

    // Movimento da Rainha (usando while) - 8 casas para esquerda
    printf("\nMovimento da Rainha:\n");
    int casasRainha = 0;
    do {
        printf("Esquerda\n");
        casasRainha++;
    } while (casasRainha < RAINHA_CASAS);

    // Movimento do Cavalo (usando loops aninhados) - movimento em L
    // Primeiro move duas casas para baixo, depois uma para esquerda
    printf("\nMovimento do Cavalo:\n");
    for (int vertical = 0; vertical < 2; vertical++) {
        printf("Baixo\n");
    }
    int horizontal = 0;
    while (horizontal < 1) {
        printf("Esquerda\n");
        horizontal++;
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
