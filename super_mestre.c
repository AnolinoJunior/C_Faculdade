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

     const char *resultados[] = {"Carta 2 = (0) venceu", "Carta 1 = (1) venceu"};

    // Seleciona o índice (0 ou 1) baseado na comparação

   // Comparação de população
    int indice_vencedor_pop = (populacao1 > populacao2);
    printf("A população da carta 1 (%lu) é maior do que a carta 2 (%lu)? : %s\n",
           populacao1,
           populacao2,
           resultados[indice_vencedor_pop]);

    // Comparação de centros turísticos
    int indice_vencedor_tur = (turistico1 > turistico2);
    printf("A Carta 1 tem mais centros turisticos (%d) que a carta 2 (%d)? : %s\n",
           turistico1,
           turistico2,
           resultados[indice_vencedor_tur]);

    // Comparação de área por km²
    int indice_vencedor_area = (area1 > area2);
    printf(" A área da carta 1 (%.2f) km² é maior que a da carta 2 (%.2f) km²? : %s \n",
           area1,
           area2,
           resultados[indice_vencedor_area]);
    // Comparação do PIB
    int indice_vencedor_pib = (pib1 > pib2);
    printf("O PIB da carta 1 (%.2f) é maior do que a da carta 2 (%.2f)? : %s \n",
           pib1,
           pib2,
           resultados[indice_vencedor_pib]);
    // Comparação Densidade
    int indice_vencedor_densidade = (densidade1 < densidade2);
    printf("A densidade da carta 1 (%.2f) é maior do que a carta 2 (%.2f)? : %s \n",
            densidade1,
            densidade2,
            resultados[indice_vencedor_densidade]);

    // Comparação Per Capita
    int indice_vencedor_per_capita = (percapita1 > percapita2);
    printf("O Per capita da carta 1 (%.2f) é maior do que da carta 2 (%.2f)? : %s \n",
            percapita1,
            percapita2,
            resultados[indice_vencedor_per_capita]);   // Comparação de Superpoderes
    int indice_vencedor_superpoder = (superpoder1 > superpoder2);
    printf(" O superpoder da carta 1 (%.2f) é maior do que da carta 2 (%.2f)? : %s \n",
            superpoder1,
            superpoder2,
            resultados[indice_vencedor_superpoder]);

    return 0;
}