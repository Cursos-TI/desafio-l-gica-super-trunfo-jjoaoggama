#include <stdio.h>
#include <string.h>

// MENU
void exibirMenu(int excluir) {
    printf("\nEscolha um atributo para comparar:\n");
    if (excluir != 1) printf("1 - População\n");
    if (excluir != 2) printf("2 - Área\n");
    if (excluir != 3) printf("3 - PIB\n");
    if (excluir != 4) printf("4 - Pontos turísticos\n");
    if (excluir != 5) printf("5 - Densidade demográfica\n");
    printf("Digite sua opção: ");
}

// VALOR DO ATRIBUTO 
float obterValor(int opcao, int pop, float area, float pib, int pontos, float densidade) {
    switch(opcao) {
        case 1: return pop;
        case 2: return area;
        case 3: return pib;
        case 4: return pontos;
        case 5: return densidade;
        default: return -1;
    }
}

int main() {
    // DADOS DA CARTA 1
    char cidade1[100] = "Cidade Alpha";
    int pop1 = 1000000;
    float area1 = 500.0;
    float pib1 = 120.0;
    int pontos1 = 15;

    // DADOS CARTA 2
    char cidade2[100] = "Cidade Beta";
    int pop2 = 950000;
    float area2 = 650.0;
    float pib2 = 140.0;
    int pontos2 = 12;

    // DENSIDADE
    float densidade1 = pop1 / area1;
    float densidade2 = pop2 / area2;

    // EXIBIR
    printf("Carta 1 - %s\n", cidade1);
    printf("Carta 2 - %s\n", cidade2);

    // ESCOLHA
    int atributo1 = 0, atributo2 = 0;

    // PEIMEIRO atributo
    do {
        exibirMenu(0);
        scanf("%d", &atributo1);
        if (atributo1 < 1 || atributo1 > 5)
            printf("Opção inválida. Tente novamente.\n");
    } while (atributo1 < 1 || atributo1 > 5);

    // Segundo atributo, excluindo o primeiro
    do {
        exibirMenu(atributo1);
        scanf("%d", &atributo2);
        if (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1)
            printf("Opção inválida ou repetida. Tente novamente.\n");
    } while (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1);

    // Obter os valores
    float val1_a1 = obterValor(atributo1, pop1, area1, pib1, pontos1, densidade1);
    float val2_a1 = obterValor(atributo1, pop2, area2, pib2, pontos2, densidade2);

    float val1_a2 = obterValor(atributo2, pop1, area1, pib1, pontos1, densidade1);
    float val2_a2 = obterValor(atributo2, pop2, area2, pib2, pontos2, densidade2);

    // Mostrar os valores
    printf("\nComparando atributos entre %s e %s:\n", cidade1, cidade2);

    // Comparar o primeiro 
    printf("\nAtributo 1 (%d): %.2f x %.2f\n", atributo1, val1_a1, val2_a1);
    int v1 = (atributo1 == 5) ? (val1_a1 < val2_a1) : (val1_a1 > val2_a1);
    int v2 = (atributo1 == 5) ? (val2_a1 < val1_a1) : (val2_a1 > val1_a1);
    printf("Resultado: %s\n", v1 ? cidade1 : (v2 ? cidade2 : "Empate"));

    // Comparar o segundo 
    printf("\nAtributo 2 (%d): %.2f x %.2f\n", atributo2, val1_a2, val2_a2);
    int w1 = (atributo2 == 5) ? (val1_a2 < val2_a2) : (val1_a2 > val2_a2);
    int w2 = (atributo2 == 5) ? (val2_a2 < val1_a2) : (val2_a2 > val1_a2);
    printf("Resultado: %s\n", w1 ? cidade1 : (w2 ? cidade2 : "Empate"));

    // Soma dos atributos
    float soma1 = val1_a1 + val1_a2;
    float soma2 = val2_a1 + val2_a2;

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n", cidade2, soma2);

    // Resultado final
    printf("\nResultado Final:\n");
    if (soma1 > soma2)
        printf("%s venceu a rodada!\n", cidade1);
    else if (soma2 > soma1)
        printf("%s venceu a rodada!\n", cidade2);
    else
        printf("Empate!\n");

    return 0;
}
