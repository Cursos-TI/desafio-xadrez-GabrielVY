#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverTorre(int casas) {
    if (casas >= 1) {
        printf("Esquerda\n");
        moverTorre(casas-1);
    }
}

void moverBispo(int casas) {
    for (int i = 0; i < casas; i++) {
        printf("Cima\n");
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
        }
    }
}

void moverCavalo() {
    for (int i = 0, j = 4; i <= j; i++, j--) {
        if (i == j) {
            printf("Direita\n");
        } else {
            printf("Cima\n");
        }
    }
}

int main() {
    int casas = 0, i = 0, j = 0;

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Digite quantas casas na diagonal você quer mover o bispo: ");
    scanf("%d", &casas);
    moverBispo(casas);

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nDigite quantas casas para a esquerda você quer mover a torre: ");
    scanf("%d", &casas);
    moverTorre(casas);
    // i = 0;
    // do {
    //     printf("Direita\n");
    //     i++;
    // } while (i < casas);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nDigite quantas casas para esquerda você quer mover a rainha: ");
    scanf("%d", &casas);
    moverTorre(casas);

    printf("\nDigite quantas casas na diagonal você quer mover a rainha: ");
    scanf("%d", &casas);
    moverBispo(casas);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\nMovimentação do Cavalo: \n");
    moverCavalo();

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
