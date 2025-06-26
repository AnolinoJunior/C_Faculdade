#include <stdio.h>

int main() {
    // Dados das cartas
    int carta1 = 1, carta2 = 2;
    unsigned long int populacao1 = 236641, populacao2 = 1139047;
    int turistico1 = 7, turistico2 = 15;
    float area1 = 62.42, area2 = 795.7;
    float pib1 = 15e9f, pib2 = 72.9e9f;
    
    // Cálculos
    float densidade1 = populacao1/area1, densidade2 = populacao2/area2;
    float percapita1 = pib1/populacao1, percapita2 = pib2/populacao2;
    float superpoder1 = populacao1 + area1 + pib1 + turistico1 + percapita1 + area1/populacao1;
    float superpoder2 = populacao2 + area2 + pib2 + turistico2 + percapita2 + area2/populacao2;

    // Cabeçalho
    printf("Comparação de Cartas:\n\n");
    
    // População (maior vence)
    printf("População: Carta %d venceu (%d)\n", 
           (populacao1 > populacao2) ? carta1 : carta2, 
           (populacao1 > populacao2));
    
    // Área (maior vence)
    printf("Área: Carta %d venceu (%d)\n", 
           (area1 > area2) ? carta1 : carta2, 
           (area1 > area2));
    
    // PIB (maior vence)
    printf("PIB: Carta %d venceu (%d)\n", 
           (pib1 > pib2) ? carta1 : carta2, 
           (pib1 > pib2));
    
    // Pontos Turísticos (maior vence)
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
           (turistico1 > turistico2) ? carta1 : carta2, 
           (turistico1 > turistico2));
    
    // Densidade Populacional (MENOR vence)
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
           (densidade1 < densidade2) ? carta1 : carta2, 
           (densidade1 < densidade2));
    
    // PIB per capita (maior vence)
    printf("PIB per Capita: Carta %d venceu (%d)\n", 
           (percapita1 > percapita2) ? carta1 : carta2, 
           (percapita1 > percapita2));
    
    // Super Poder (maior vence)
    printf("Super Poder: Carta %d venceu (%d)\n", 
           (superpoder1 > superpoder2) ? carta1 : carta2, 
           (superpoder1 > superpoder2));

    return 0;
}

