#include <stdio.h>

int main() {
    // Nível Novato - Posicionamento dos Navios
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int coluna[10] = {'1','2','3','4','5','6','7','8','9','10'};
    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro com zeros

    // Posiciona um navio verticalmente na coluna 2
    for (int C = 0; C < 3; C++) {
        tabuleiro[C][1] = 3;
    }

    // Posiciona um navio horizontalmente na linha 6 
    for (int L = 0; L < 3; L++) {
        tabuleiro[5][L] = 3;
    }

    // Exibe o tabuleiro
    printf("Tabuleiro:\n");
    for (int C = 0; C < 10; C++) {
        for (int L = 0; L < 10; L++) {
            printf("%d ", tabuleiro[C][L]);
        }
        printf("\n");
    }

    return 0;
}
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
