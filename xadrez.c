#include <stdio.h>

int main() {
    // Movimentação da Torre: 5 casas para a direita (usando 'for')
    int movimentoTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimentação do Bispo: 5 casas na diagonal para cima e à direita (usando 'while')
    int movimentoBispo = 5;
    int contadorBispo = 0;
    printf("Movimento do Bispo:\n");
    while (contadorBispo < movimentoBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");

    // Movimentação da Rainha: 8 casas para a esquerda (usando 'do-while')
    int movimentoRainha = 8;
    int contadorRainha = 0;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < movimentoRainha);

    return 0;
}
