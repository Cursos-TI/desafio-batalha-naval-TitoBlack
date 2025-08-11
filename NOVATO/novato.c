#include <stdio.h>

int main() {
    int i, j;
    int tabuleiro[10][10];
    int linha = 6;
    int coluna = 7;

    printf("   - JOGO BATALHA NAVAL - \n");

    //inicia o tabuleiro com 0 (agua)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    //navio vertical
    for (i = 1; i <= 3; i++) {
        tabuleiro[i][coluna] = 3;
    }

    //navio horizontal
    for (j = 2; j <= 4; j++) {
        tabuleiro[linha][j] = 3;
    }

    //cabeçalho e tabuleiro
    printf("     ");
    for (j = 0; j < 10; j++) 
    {
        printf("%c ", 'A' + j);
    }
    printf("\n");

    for (i = 0; i < 10; i++) {
        printf("%2d   ", i + 1);
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
