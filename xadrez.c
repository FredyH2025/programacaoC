#include <stdio.h>

int main() {
    // Movimentação da Torre: 5 casas para a direita (usando 'for')
    int movimentoTorre = 5;                         // O movimentoTorre é inicializado com 5
    printf("Movimento da Torre:\n");                
    for (int i = 0; i < movimentoTorre; i++) {      // enquanto o i for menor movimentoTorre, a Torre se movimenta para a direita  
        printf("Direita\n");                        // mostra todos os movimentos da Torre 
    }

    printf("\n");

    // Movimentação do Bispo: 5 casas na diagonal para cima e à direita (usando 'while')
    int movimentoBispo = 5;                        // O movimentoBispo é inicializado com 5
    int contadorBispo = 0;  
    printf("Movimento do Bispo:\n");
    while (contadorBispo < movimentoBispo) {       // enquanto o contadorBispo for menor do que o movimentoBispo, o Bispo movimenta para cima direita    
        printf("Cima Direita\n");                  // mostra dos os movimentos do Bispo  
        contadorBispo++;                           // contadorBispo vai sendo incrementado 
    }

    printf("\n");

    // Movimentação da Rainha: 8 casas para a esquerda (usando 'do-while')
    int movimentoRainha = 8;                       // O movimentoRainha é inicializado com 8
    int contadorRainha = 0;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");                      // mostra todos os movimentos da Rainha
        contadorRainha++;                          // contadorRainha vai sendo incrementado
    } while (contadorRainha < movimentoRainha);    // enquanto o contadorRainha for menor do que o movimentoRainha, a Rainha se movimenta para a esquerda

    printf("\n");

    
    // Movimentação do Cavalo: movimento em "L" (2 para baixo, 1 para esquerda)
    // Usando 'for' + 'while' (loops aninhados)
    int movimentosL = 1;  // Quantas vezes queremos simular o movimento em L (pode ser aumentado)
    printf("Movimento do Cavalo:\n");

    for (int i = 0; i < movimentosL; i++) {   // mostra o cavalo iniciando seu movimento
        // Primeiro: 2 casas para baixo
        int passosBaixo = 0;
        while (passosBaixo < 2) {      
            printf("Baixo\n");             // mostra os movimentos do Cavalo para baixo
            passosBaixo++;           
        }

        // Depois: 1 casa para esquerda
        printf("Esquerda\n");             // mostra o movimento do Cavalo para a esquerda
    }

    
    return 0;
}
