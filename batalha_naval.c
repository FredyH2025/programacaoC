#include <stdio.h>

// Tamanho do tabuleiro
#define N 10

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[N][N]) {     // tabuleiro tamanho 10 x 10
    for (int i = 0; i < N; i++) {               
        for (int j = 0; j < N; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para posicionar o navio horizontalmente
void posicionarNavioHorizontal(int tabuleiro[N][N], int linha, int coluna, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[linha][coluna + i] = 3; // Marca a posição do navio
    }
}

// Função para posicionar o navio verticalmente
void posicionarNavioVertical(int tabuleiro[N][N], int linha, int coluna, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[linha + i][coluna] = 3; // Marca a posição do navio
    }
}

int main() {
    // Inicializando o tabuleiro com 0 (representando água)
    int tabuleiro[N][N] = {0};

    // Definindo as coordenadas iniciais dos navios
    // Navio horizontal: começa na linha 2, coluna 3
    int linhaHorizontal = 2, colunaHorizontal = 3;
    // Navio vertical: começa na linha 5, coluna 5
    int linhaVertical = 5, colunaVertical = 5;

    // Tamanho dos navios
    int tamanhoNavio = 3;

    // Posicionando os navios no tabuleiro
    posicionarNavioHorizontal(tabuleiro, linhaHorizontal, colunaHorizontal, tamanhoNavio);    // posiconamento do navio na horizontal
    posicionarNavioVertical(tabuleiro, linhaVertical, colunaVertical, tamanhoNavio);          // posicionamento do navio na vertical

    // Exibindo o tabuleiro
    printf("Tabuleiro com os navios posicionados:\n"); 
    exibirTabuleiro(tabuleiro);                          // mostra os navios posicionados

    return 0;
}
