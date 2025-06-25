#include <stdio.h>
 
int main() {
int carta1 = 1, carta2 = 2; //colocando numeração nas cartas
int populacao1 = 236641, populacao2 = 1139047; // quantidade de habitantes na cidade
int turistico1 = 7, turistico2 = 15;
float area1 = 62.42, area2 = 795.7;
float  pib1 = 15e9f, pib2 = 72.9e9f;  // 15 bilhões (15 × 10⁹) 72,9 bilhões (72,9 × 10⁹)
char estado1 = 'A', estado2 = 'B';
char codigocarta1[10] = "A01", codigocarta2[10] = "A02";
char nomecidade1[15] = "Hortolandia", nomecidade2[15] = "Campinas";

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

    return 0;
}

