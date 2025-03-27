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