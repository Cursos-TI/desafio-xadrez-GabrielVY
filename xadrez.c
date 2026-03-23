#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int casas = 0, i = 0, j = 0;

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Digite quantas casas na diagonal você quer mover o bispo: ");
    scanf("%d", &casas);

    i = 0;
    j = 0;
    while (i < casas) {
        printf("Direita\n");
        printf("Cima\n");
        i++;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nDigite quantas casas para a direita você quer mover a torre: ");
    scanf("%d", &casas);

    i = 0;
    do {
        printf("Direita\n");
        i++;
    } while (i < casas);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nDigite quantas casas para cima você quer mover a rainha: ");
    scanf("%d", &casas);

    for (i = 0; i < casas; i++) {
        printf("Cima\n");
    }

    printf("\nDigite quantas casas na diagonal você quer mover a rainha: ");
    scanf("%d", &casas);

    for (i = 0; i < casas; i++) {
        printf("Baixo\n");
        printf("Direita\n");
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
