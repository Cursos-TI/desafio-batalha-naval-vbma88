#include <stdio.h>

int main() {
    char coluna[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro[10][10] = {0}; // inicializa tudo com 0
    int i, j;

    // ---- Definição dos navios (tamanho fixo = 3) ----
    // Navio vertical
    int x_vertical = 1, y_vertical = 2;
    int tam_vertical = 3;

    // Navio horizontal
    int x_horizontal = 5, y_horizontal = 4;
    int tam_horizontal = 3;

    // Navio diagonal ↘
    int x_diag1 = 0, y_diag1 = 0;
    int tam_diag1 = 3;

    // Navio diagonal ↙
    int x_diag2 = 0, y_diag2 = 9;
    int tam_diag2 = 3;

    // ---- Posicionando os navios ----
    // Vertical
    for (i = 0; i < tam_vertical; i++) {
        tabuleiro[x_vertical + i][y_vertical] = 3;
    }

    // Horizontal
    for (j = 0; j < tam_horizontal; j++) {
        tabuleiro[x_horizontal][y_horizontal + j] = 3;
    }

    // Diagonal ↘
    for (i = 0; i < tam_diag1; i++) {
        tabuleiro[x_diag1 + i][y_diag1 + i] = 3;
    }

    // Diagonal ↙
    for (i = 0; i < tam_diag2; i++) {
        tabuleiro[x_diag2 + i][y_diag2 - i] = 3;
    }

    // ---- Exibindo as coordenadas ----
    printf("Coordenadas dos Navios:\n");

    printf("\nVertical:\n");
    for (i = 0; i < tam_vertical; i++) {
        printf("(%d, %c)\n", x_vertical + i + 1, coluna[y_vertical]);
    }

    printf("\nHorizontal:\n");
    for (j = 0; j < tam_horizontal; j++) {
        printf("(%d, %c)\n", x_horizontal + 1, coluna[y_horizontal + j]);
    }

    printf("\nDiagonal:\n");
    for (i = 0; i < tam_diag1; i++) {
        printf("(%d, %c)\n", x_diag1 + i + 1, coluna[y_diag1 + i]);
    }

    printf("\nDiagonal:\n");
    for (i = 0; i < tam_diag2; i++) {
        printf("(%d, %c)\n", x_diag2 + i + 1, coluna[y_diag2 - i]);
    }

    // ---- Exibindo tabuleiro ----
    printf("\n---------------------------------------- ");
    printf("\nTabuleiro 10x10 (0 = vazio, 3 = navio):\n");
    printf("-----------------------------------------\n\n   ");

    // Cabeçalho com letras A..J
    for (j = 0; j < 10; j++) {
        printf("%c ", coluna[j]);
    }
    printf("\n");

    // Corpo com números das linhas (1 a 10)
    for (i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
