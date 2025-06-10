#include <stdio.h>
#include <string.h> // Necessário para strcspn se for usar com fgets

int main() {
    // Variáveis para a primeira carta
    char estado1[3]; // Para siglas como "SP"   
    char codigo1[4]; // Para "A01"
    char cidade1[50];
    int populacao1, pontostur1;
    float area1, pib1;
    int ch; // Para limpar buffer

    // Variáveis para a segunda carta
    char estado2[3];
    char codigo2[4];
    char cidade2[50];
    int populacao2, pontostur2;
    float area2, pib2;

    // Entrada de dados da primeira carta
    printf("Digite o estado da carta 1 (ex: SP): ");  // Entra com a informação do estado
    scanf("%2s", estado1); // Lê até 2 chars para estado1[3]
    while ((ch = getchar()) != '\n' && ch != EOF);  // Limpa buffer

    printf("Digite o codigo da carta 1 (ex: A01): ");  // Entrar com a informação do código 
    scanf("%3s", codigo1); // Lê até 3 chars para codigo1[4]
    while ((ch = getchar()) != '\n' && ch != EOF);  // Limpa buffer

    printf("Digite a cidade da carta 1: "); // Entra com a informação da cidade
    // Para ler nomes com espaços:
    scanf(" %49[^\n]", cidade1); // Espaço antes, [^\n], limite de 49 para cidade1[50]
    while ((ch = getchar()) != '\n' && ch != EOF);  // Limpa buffer

    printf("Digite a populacao da carta 1: "); // Entra com a informação da população
    scanf("%d", &populacao1);
    while ((ch = getchar()) != '\n' && ch != EOF);  // Limpa buffer

    printf("Digite a area da carta 1: ");  // Entra com a informação da área
    scanf("%f", &area1);
    while ((ch = getchar()) != '\n' && ch != EOF);  // Limpa buffer

    printf("Digite o PIB da carta 1: ");  // Entra com a informação do PIB
    scanf("%f", &pib1);
    while ((ch = getchar()) != '\n' && ch != EOF);  // Limpa buffer

    printf("Digite a quantidade de pontos turisticos da carta 1: ");  // Entra com a informação da quantidade de pontos
    scanf("%d", &pontostur1);
    while ((ch = getchar()) != '\n' && ch != EOF);  // Limpa buffer

    // Entrada de dados da segunda carta
    printf("\nDigite o estado da carta 2 (ex: RJ): ");  // Entra com a informação do estado  
    scanf("%2s", estado2);  // Lê até 2 chars para estado2[3]
    while ((ch = getchar()) != '\n' && ch != EOF);  // Limpa buffer

    printf("Digite o codigo da carta 2 (ex: B02): ");
    scanf("%3s", codigo2);
    while ((ch = getchar()) != '\n' && ch != EOF);  // Limpa buffer

    printf("Digite a cidade da carta 2: ");  // Entra com a informação da cidade
    // Para ler nomes com espaços:
    scanf(" %49[^\n]", cidade2); // Espaço antes, [^\n], limite de 49 para cidade2[50]
    while ((ch = getchar()) != '\n' && ch != EOF);  // Limpa buffer

    printf("Digite a populacao da carta 2: "); // Entra com a informação da população
    scanf("%d", &populacao2);
    while ((ch = getchar()) != '\n' && ch != EOF);  // Limpa buffer

    printf("Digite a area da carta 2: "); // Entra com a informação da área
    scanf("%f", &area2);
    while ((ch = getchar()) != '\n' && ch != EOF);  // Limpa buffer

    printf("Digite o PIB da carta 2: ");  // Entra com a informação do PIB
    scanf("%f", &pib2);
    while ((ch = getchar()) != '\n' && ch != EOF);  // Limpa buffer

    printf("Digite a quantidade de pontos turisticos da carta 2: ");   // Entra com a informação da quantidade de pontos
    scanf("%d", &pontostur2);
    while ((ch = getchar()) != '\n' && ch != EOF);  // Limpa buffer


    // Exibindo os dados das cartas
    printf("\n--- Informacoes da Carta 1 ---\n");
    printf("Estado: %s\n", estado1);         // Mostra a informação do estado
    printf("Codigo: %s\n", codigo1);         // Mostra a informação do código
    printf("Cidade: %s\n", cidade1);         // Mostra a informação da cidade 
    printf("Populacao: %d\n", populacao1);   // Mostra a informação da população
    printf("Area: %.2f km²\n", area1);       // Mostra a informação da área
    printf("PIB: %.2f bilhões de reais\n", pib1);   // Mostra a informação do PIB
    printf("Pontos turisticos: %d\n", pontostur1);  // Mostra a quantidade de Pontos Turísticos

    printf("\n--- Informacoes da Carta 2 ---\n");
    printf("Estado: %s\n", estado2);         // Mostra a informação do estado
    printf("Codigo: %s\n", codigo2);         // Mostra a informação do código
    printf("Cidade: %s\n", cidade2);         // Mostra a informação da cidade
    printf("Populacao: %d\n", populacao2);   // Mostra a informação da população
    printf("Area: %.2f km²\n", area2);       // Mostra a informação da área
    printf("PIB: %.2f bilhões de reais\n", pib2);   // Mostra a informação do PIB
    printf("Pontos turisticos: %d\n", pontostur2);  // Mostra a quantidade de Pontos Turísticos

    return 0;
}
