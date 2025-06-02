#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro 
    // VARIAVEL DA 1 CARTA
    char estado1;
    char codigo1[4];
    char cidade1[100];
    int populacao1;
    float area1, pib1;
    int pontos1;
    float densidade1, pibPerCapita1;
    
    // VARIAVEIS DA 2 CARTA
    char estado2;
    char codigo2[4];
    char cidade2[100];
    int populacao2;
    float area2, pib2;
    int pontos2;
    float densidade2, pibPerCapita2;
    

    // DADOS CARTA 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (letra A-H): ");
    scanf(" %c", &estado1);
    printf("Código da carta: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    getchar(); // limpar buffer
    fgets(cidade1, 100, stdin);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    //  DADOS CARTA 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (letra A-H): ");
    scanf(" %c", &estado2);
    printf("Código da carta: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    getchar(); // limpar buffer
    fgets(cidade2, 100, stdin);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // CALCUSLOS 
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibPerCapita1 = (pib1 * 1e9) / populacao1;
    pibPerCapita2 = (pib2 * 1e9) / populacao2;
  
    
    // MOTSRAR DADOS DA CARTA 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // MOSTRAR DADOS DA CARTA 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    
    // COMPARAÇÃO DAS CARTASS
    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1: %d habitantes\n", populacao1);
    printf("Carta 2: %d habitantes\n", populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 venceu!\n");
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 venceu!\n");
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}

