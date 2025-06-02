#include <stdio.h>

// Definindo constantes para o número de casas que cada peça pode se mover
const int CASAS_BISPO = 3;    // Bispo se move 3 casas em diagonal
const int CASAS_TORRE = 3;    // Torre se move 3 casas para a direita
const int CASAS_RAINHA = 4;   // Rainha se move 4 casas para a esquerda
const int REPETICOES_CAVALO = 2; // Cavalo faz o movimento em "L" 2 vezes

// Função recursiva para o movimento do Bispo (diagonal superior direita)
void moverBispo(int casas, int atual) {
    // Caso base: se não há mais casas a percorrer, pare
    if (atual > casas) return;
    printf("Cima\n");
    printf("Direita\n");
    // Chamada recursiva para a próxima casa
    moverBispo(casas, atual + 1);
}

// Função recursiva para o movimento da Torre (direita)
void moverTorre(int casas, int atual) {
    // Caso base: se não há mais casas a percorrer, pare
    if (atual > casas) return;
    printf("Direita\n");
    // Chamada recursiva para a próxima casa
    moverTorre(casas, atual + 1);
}

// Função recursiva para o movimento da Rainha (esquerda)
void moverRainha(int casas, int atual) {
    // Caso base: se não há mais casas a percorrer, pare
    if (atual > casas) return;
    printf("Esquerda\n");
    // Chamada recursiva para a próxima casa
    moverRainha(casas, atual + 1);
}

// Função com loops aninhados para o movimento do Cavalo (L: duas casas para cima, uma para a direita)
void moverCavalo(int repeticoes) {
    // Loop externo para controlar o número de movimentos em "L"
    for (int i = 1; i <= repeticoes; i++) {
        // Loop interno para o movimento vertical (duas casas para cima)
        for (int j = 1; j <= 2; j++) {
            if (j > 2) break; // Garante exatamente duas casas para cima
            printf("Cima\n");
        }
        // Loop interno para o movimento horizontal (uma casa para a direita)
        for (int k = 1; k <= 1; k++) {
            printf("Direita\n");
        }
        // Se já completou o movimento em "L", continua para a próxima iteração
        if (i < repeticoes) continue;
    }
}

int main() {
    // Nível Novato - Movimentação das Peças

    // Implementação de Movimentação do Bispo
    printf("Movimento do Bispo (Recursivo):\n");
    moverBispo(CASAS_BISPO, 1);
    printf("\n");

    // Implementação de Movimentação da Torre
    printf("Movimento da Torre (Recursivo):\n");
    moverTorre(CASAS_TORRE, 1);
    printf("\n");

    // Implementação de Movimentação da Rainha
    printf("Movimento da Rainha (Recursivo):\n");
    moverRainha(CASAS_RAINHA, 1);
    printf("\n");

    // Nível Aventureiro e Mestre - Movimentação do Cavalo
    printf("Movimento do Cavalo (Loops Aninhados):\n");
    moverCavalo(REPETICOES_CAVALO);
    printf("\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // As funções recursivas para Bispo, Torre e Rainha já foram implementadas acima
    // A movimentação do Cavalo utiliza loops aninhados com break e continue

    return 0;
}
