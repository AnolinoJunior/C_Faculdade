#include <stdio.h>

int main() {
    // Dados das cartas
    char cidade1[] = "Hortolândia (SP)";
    char cidade2[] = "Campinas (SP)";
    
    unsigned long int populacao1 = 236641, populacao2 = 1139047;
    int turistico1 = 7, turistico2 = 15;
    float area1 = 62.42, area2 = 795.7;
    float pib1 = 15e9f, pib2 = 72.9e9f;  // 15 bilhões (15 × 10⁹) e 72,9 bilhões (72,9 × 10⁹)
    
    // Cálculos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float percapita1 = pib1 / populacao1;
    float percapita2 = pib2 / populacao2;

    // Mostra Status das Cartas
    printf("----------------------------------------\n");
    printf("Carta 1 - %s:\n", cidade1);
    printf("  População: %lu hab\n", populacao1);
    printf("  Atrativos Turísticos: %d\n", turistico1);
    printf("  Densidade Demográfica: %.2f hab/km²\n", densidade1);
    printf("  PIB per capita: R$ %.2f\n", percapita1);
    printf("\n");
    
    printf("Carta 2 - %s:\n", cidade2);
    printf("  População: %lu hab\n", populacao2);
    printf("  Atrativos Turísticos: %d\n", turistico2);
    printf("  Densidade Demográfica: %.2f hab/km²\n", densidade2);
    printf("  PIB per capita: R$ %.2f\n", percapita2);
    printf("----------------------------------------\n\n");

    // Comparação de população
    printf("Comparando POPULAÇÃO:\n");
    printf("  %s: %lu hab\n", cidade1, populacao1);
    printf("  %s: %lu hab\n", cidade2, populacao2);
    
    if (populacao1 > populacao2) {
        printf("  Resultado: Carta 1 (%s) Venceu!\n", cidade1);
    } else {
        printf("  Resultado: Carta 2 (%s) Venceu!\n", cidade2);
    }
    printf("\n");

    // Comparação de atrativos turísticos
    printf("Comparando ATRATIVOS TURÍSTICOS:\n");
    printf("  %s: %d\n", cidade1, turistico1);
    printf("  %s: %d\n", cidade2, turistico2);
    
    if (turistico1 > turistico2) {
        printf("  Resultado: Carta 1 (%s) Venceu!\n", cidade1);
    } else {
        printf("  Resultado: Carta 2 (%s) Venceu!\n", cidade2);
    }
    printf("\n");

    // Comparação de densidade demográfica (quanto menor, melhor)
    printf("Comparando DENSIDADE DEMOGRÁFICA (menor é melhor):\n");
    printf("  %s: %.2f hab/km²\n", cidade1, densidade1);
    printf("  %s: %.2f hab/km²\n", cidade2, densidade2);
    
    if (densidade1 < densidade2) {
        printf("  Resultado: Carta 1 (%s) Venceu!\n", cidade1);
    } else {
        printf("  Resultado: Carta 2 (%s) Venceu!\n", cidade2);
    }
    printf("\n");

    // Comparação de PIB per capita
    printf("Comparando PIB PER CAPITA:\n");
    printf("  %s: R$ %.2f\n", cidade1, percapita1);
    printf("  %s: R$ %.2f\n", cidade2, percapita2);
    
    if (percapita1 > percapita2) {
        printf("  Resultado: Carta 1 (%s) Venceu!\n", cidade1);
    } else {
        printf("  Resultado: Carta 2 (%s) Venceu!\n", cidade2);
    }
    printf("\n");

    return 0;
}