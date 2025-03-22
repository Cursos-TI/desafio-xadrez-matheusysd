#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Funções recursivas para movimentação das peças
void moveTorre(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Direita\n");
    moveTorre(casasRestantes - 1);
}

void moveBispo(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Cima, Direita\n");
    moveBispo(casasRestantes - 1);
}

void moveRainha(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Esquerda\n");
    moveRainha(casasRestantes - 1);
}

// Função alternativa para o Bispo usando loops aninhados
void moveBispoComLoops(int casas) {
    for (int vertical = 0; vertical < casas; vertical++) {
        for (int horizontal = 0; horizontal <= vertical; horizontal++) {
            if (horizontal == vertical) {
                printf("Cima, Direita\n");
            }
        }
    }
}

int main() {
    // Definindo constantes para o número de casas
    const int TORRE_CASAS = 5;   // Torre move 5 casas
    const int BISPO_CASAS = 5;   // Bispo move 5 casas
    const int RAINHA_CASAS = 8;  // Rainha move 8 casas

    // Movimento da Torre (recursivo)
    printf("\nMovimento da Torre:\n");
    moveTorre(TORRE_CASAS);

    // Movimento do Bispo (recursivo)
    printf("\nMovimento do Bispo (recursivo):\n");
    moveBispo(BISPO_CASAS);

    // Movimento do Bispo (loops aninhados)
    printf("\nMovimento do Bispo (loops):\n");
    moveBispoComLoops(BISPO_CASAS);

    // Movimento da Rainha (recursivo)
    printf("\nMovimento da Rainha:\n");
    moveRainha(RAINHA_CASAS);

    // Movimento do Cavalo (loops complexos) - duas casas para cima, uma para direita
    printf("\nMovimento do Cavalo:\n");
    for (int movimento = 0; movimento < 3; movimento++) {
        if (movimento < 2) {
            printf("Cima\n");
            continue;  // Pula para próxima iteração após mover para cima
        }
        printf("Direita\n");  // Última iteração move para direita
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
