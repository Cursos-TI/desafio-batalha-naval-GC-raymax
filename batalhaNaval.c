#include <stdio.h>

int main() {
    // nível Aventureiro
    char coluna[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int linha[10] = {'1','2','3','4','5','6','7','8','9','10'};
    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro com zeros

    // Posiciona um navio verticalmente na coluna 2
    for (int L = 0; L < 3; L++) {
        tabuleiro[L][9] = 3;
    }

    // Posiciona um navio horizontalmente na linha 6 
    for (int C = 0; C < 3; C++) {
        tabuleiro[5][C] = 3;
    }

    // Posiciona um navio Diagonalmente 
    for (int D = 0; D < 3; D++){
        tabuleiro[D][D] = 3;
    }

    // Posiciona um navio Diagonalmente
    for (int D = 0; D < 3; D++){
        tabuleiro[D][D + 3] = 3;
    }

    // Exibe o tabuleiro
    printf("Tabuleiro:\n");
        // Exibe a numeração das colunas
        printf("  ");
        for (int C = 0; C < 10; C++) {
            printf("%c ", coluna[C]);
        }

    // Exibe o tabuleiro
    for (int L = 0; L < 10; L++) {
        printf("\n%c ", linha[L]); // Exibe a letra da linha
        for (int C = 0; C < 10; C++) {
            printf("%d ", tabuleiro[L][C]);
        }
        
    }
    
    return 0;
}

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
