#include <stdio.h>
 // Exemplo de entrada
int main() {
int carta1 = 1, carta2 = 2; //colocando numeração nas cartas
int populacao1 = 236641, populacao2 = 1139047; // quantidade de habitantes na cidade
int turistico1 = 7, turistico2 = 15;
float area1 = 62.42, area2 = 795.7;
float  pib1 = 15e9f, pib2 = 72.9e9f;  // 15 bilhões (15 × 10⁹) 72,9 bilhões (72,9 × 10⁹)
char estado1 = 'A', estado2 = 'B';
char codigocarta1[10] = "A01", codigocarta2[10] = "A02";
char nomecidade1[15] = "Hortolandia", nomecidade2[15] = "Campinas";
float densidade1 = populacao1/area1, densidade2 = populacao2/area2;
float percapita1 = pib1/populacao1, percapita2 = pib2/populacao2;

//Exemplo de exibição
 printf("\n--- DADOS DA CIDADE 1 ---\n");
    printf("Carta: %d\n", carta1);
    printf("Código da Carta: %s\n", codigocarta1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("Estado: %c\n", estado1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1 / 1e9); // Convertendo para bilhões
    printf("Pontos Turísticos: %d\n", turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("Pib per capital: %.2f reais\n", percapita1);

    // Exibindo os dados da CIDADE 2
    printf("\n--- DADOS DA CIDADE 2 ---\n");
    printf("Carta: %d\n", carta2);
    printf("Código da Carta: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("Estado: %c\n", estado2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2 / 1e9); // Convertendo para bilhões
    printf("Pontos Turísticos: %d\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("Pib per capital: %.2f reais\n", percapita2);
    return 0;
}