#include <stdio.h>

int main() {
    // Tamanho fixo do tabuleiro e dos navios
    int tamanhoTabuleiro = 10;
    int tamanhoNavio = 3;

    // Representação do tabuleiro 10x10, inicializado com 0 (água)
    int tabuleiro[10][10] = {0};

    // Coordenadas iniciais dos navios
    int navioHorizontalLinha = 2, navioHorizontalColuna = 4; // Navio horizontal começa na posição (2, 4)
    int navioVerticalLinha = 5, navioVerticalColuna = 7;     // Navio vertical começa na posição (5, 7)
    int navioDiagonal1Linha = 1, navioDiagonal1Coluna = 1;   // Navio diagonal 1 começa na posição (1, 1)
    int navioDiagonal2Linha = 7, navioDiagonal2Coluna = 9;   // Navio diagonal 2 começa na posição (7, 9)

    // Posicionando o navio horizontal no tabuleiro
    for (int i = 0; i < tamanhoNavio; i++) {
        if (navioHorizontalColuna + i < tamanhoTabuleiro) { // Garantir que não ultrapasse os limites
            tabuleiro[navioHorizontalLinha][navioHorizontalColuna + i] = 3;
        }
    }

    // Posicionando o navio vertical no tabuleiro
    for (int i = 0; i < tamanhoNavio; i++) {
        if (navioVerticalLinha + i < tamanhoTabuleiro) { // Garantir que não ultrapasse os limites
            tabuleiro[navioVerticalLinha + i][navioVerticalColuna] = 3;
        }
    }

    // Posicionando o navio diagonal 1 (linha e coluna aumentam simultaneamente)
    for (int i = 0; i < tamanhoNavio; i++) {
        if (navioDiagonal1Linha + i < tamanhoTabuleiro && navioDiagonal1Coluna + i < tamanhoTabuleiro) { // Garantir que não ultrapasse os limites
            tabuleiro[navioDiagonal1Linha + i][navioDiagonal1Coluna + i] = 3;
        }
    }

    // Posicionando o navio diagonal 2 (linha aumenta e coluna diminui simultaneamente)
    for (int i = 0; i < tamanhoNavio; i++) {
        if (navioDiagonal2Linha + i < tamanhoTabuleiro && navioDiagonal2Coluna - i >= 0) { // Garantir que não ultrapasse os limites
            tabuleiro[navioDiagonal2Linha + i][navioDiagonal2Coluna - i] = 3;
        }
    }

    // Exibindo o tabuleiro no console
    printf("Tabuleiro de Batalha Naval:\n");
    for (int i = 0; i < tamanhoTabuleiro; i++) {
        for (int j = 0; j < tamanhoTabuleiro; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}