#include <stdio.h>

void aplicar_habilidade(int tabuleiro[10][10], int habilidade[5][5], int origem_linha, int origem_coluna) {
    for (int L = 0; L < 5; L++) {
        for (int C = 0; C < 5; C++) {
            int linha = origem_linha + L - 2;
            int coluna = origem_coluna + C - 2;
            if (linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10) {
                if (habilidade[L][C] == 1) {
                    tabuleiro[linha][coluna] = 1;
                }
            }
        }
    }
}

int main() {
    // nível Mestre
    char coluna[10] = {'A','B','C','D','E','F','G','H','I','J'};
    char linha[10] = {'1','2','3','4','5','6','7','8','9','10'};
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
    for (int D = 0; D < 3; D++) {
        tabuleiro[D][D] = 3;
    }

    // Posiciona um navio Diagonalmente
    for (int D = 0; D < 3; D++) {
        tabuleiro[D][D + 3] = 3;
    }

    // Matrizes de habilidades
    int habilidade_cone[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    int habilidade_cruz[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0}
    };

    int habilidade_octa[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    // Aplicar habilidades ao tabuleiro
    aplicar_habilidade(tabuleiro, habilidade_cone, 2, 2);
    aplicar_habilidade(tabuleiro, habilidade_cruz, 5, 5);
    aplicar_habilidade(tabuleiro, habilidade_octa, 7, 7);

    // Exibe o tabuleiro
    printf("Tabuleiro:\n");

    // Exibe a numeração das colunas
    printf("  ");
    for (int C = 0; C < 10; C++) {
        printf("%c ", coluna[C]);
    }
    printf("\n");

    // Exibe o tabuleiro com os valores das linhas
    for (int L = 0; L < 10; L++) {
        printf("%c ", linha[L]); // Exibe o valor da linha
        for (int C = 0; C < 10; C++) {
            printf("%d ", tabuleiro[L][C]);
        }
        printf("\n");
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
