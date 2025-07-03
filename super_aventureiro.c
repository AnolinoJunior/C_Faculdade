#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Dados das cartas
    char pais1[] = "Brasil";
    char pais2[] = "Argentina";
    unsigned long int populacao1 = 203000000, populacao2 = 46000000;
    float pib1 = 2.1e12f, pib2 = 0.64e12f; // PIB em dólares
    int area1 = 8515767, area2 = 2780400;    // km²
    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;

    // Mostra as cartas disponíveis
    printf("Super Trunfo - Países\n");
    printf("Carta 1: %s\n População: %lu\n PIB: %.2f\n Área: %d\n Densidade: %.2f\n", 
           pais1, populacao1, pib1, area1, densidade1);
    printf("Carta 2: %s\n População: %lu\n PIB: %.2f\n Área: %d\n Densidade: %.2f\n", 
           pais2, populacao2, pib2, area2, densidade2);

    // Escolha do jogador (Carta 1 ou 2)
    int escolha_jogador;
    printf("\nEscolha sua carta (1 para %s, 2 para %s): ", pais1, pais2);
    scanf("%d", &escolha_jogador);

    // Define qual carta é do jogador e qual é do jogador 2
    int carta_jogador = escolha_jogador;
    int carta_jogador2;

    if (escolha_jogador == 1) {
        carta_jogador2 = 2;
    } else {
        carta_jogador2 = 1;
    }

    // Turno do Jogador (escolhe um atributo)
    printf("\n--- Seu Turno ---\n");
    printf("Escolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - PIB\n");
    printf("3 - Área\n");
    printf("4 - Densidade Demográfica\n");
    int atributo_jogador;
    scanf("%d", &atributo_jogador);

    // Turno do Jogador 2 (usa o mesmo atributo do Jogador 1)
    printf("\n--- Turno do Jogador 2 ---\n");
    int atributo_jogador2 = atributo_jogador; // Escolhe o mesmo atributo

    // Comparação dos atributos
    float valor_jogador, valor_jogador2;

    // Obtém os valores do atributo escolhido pelo Jogador 1
    if (carta_jogador == 1) {
        switch (atributo_jogador) {
            case 1: valor_jogador = populacao1; break;
            case 2: valor_jogador = pib1; break;
            case 3: valor_jogador = area1; break;
            case 4: valor_jogador = densidade1; break;
        }
    } else {
        switch (atributo_jogador) {
            case 1: valor_jogador = populacao2; break;
            case 2: valor_jogador = pib2; break;
            case 3: valor_jogador = area2; break;
            case 4: valor_jogador = densidade2; break;
        }
    }

    // Obtém os valores do atributo escolhido pelo Jogador 2 (carta oposta)
    if (carta_jogador2 == 1) {
        switch (atributo_jogador2) {
            case 1: valor_jogador2 = populacao1; break;
            case 2: valor_jogador2 = pib1; break;
            case 3: valor_jogador2 = area1; break;
            case 4: valor_jogador2 = densidade1; break;
        }
    } else {
        switch (atributo_jogador2) {
            case 1: valor_jogador2 = populacao2; break;
            case 2: valor_jogador2 = pib2; break;
            case 3: valor_jogador2 = area2; break;
            case 4: valor_jogador2 = densidade2; break;
        }
    }

    // Mostra as escolhas
    printf("\nVocê escolheu o atributo %d (Valor: %.2f)\n", atributo_jogador, valor_jogador);
    printf("O Jogador 2 escolheu o atributo %d (Valor: %.2f)\n", atributo_jogador2, valor_jogador2);

    // Verifica quem venceu
    if (atributo_jogador == 4) {
        // Caso especial: Densidade (menor valor vence)
        if (valor_jogador < valor_jogador2) {
            printf("\nVocê venceu esta rodada!\n");
        } else if (valor_jogador > valor_jogador2) {
            printf("\nO Jogador 2 venceu esta rodada!\n");
        } else {
            printf("\nEmpate!\n");
        }
    } else {
        // Para outros atributos, maior valor vence
        if (valor_jogador > valor_jogador2) {
            printf("\nVocê venceu esta rodada!\n");
        } else if (valor_jogador < valor_jogador2) {
            printf("\nO Jogador 2 venceu esta rodada!\n");
        } else {
            printf("\nEmpate!\n");
        }
    }

    return 0;
}