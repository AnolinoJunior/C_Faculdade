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

    srand(time(0)); // Inicializa o gerador de números aleatórios

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

    // Define qual carta é do jogador e qual é do computador
    int carta_jogador = escolha_jogador;
    int carta_computador;

    if (escolha_jogador == 1) {
        carta_computador = 2;
    } else if (escolha_jogador == 2) {
        carta_computador = 1;
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

    // Turno do Computador (escolhe aleatoriamente)
    printf("\n--- Turno do Computador ---\n");
    int atributo_computador = rand() % 4 + 1; // 1 a 4

    // Comparação dos atributos
    float valor_jogador, valor_computador;

    // Obtém os valores do atributo escolhido pelo jogador
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

    // Obtém os valores do atributo escolhido pelo computador
    if (carta_computador == 1) {
        switch (atributo_computador) {
            case 1: valor_computador = populacao1; break;
            case 2: valor_computador = pib1; break;
            case 3: valor_computador = area1; break;
            case 4: valor_computador = densidade1; break;
        }
    } else {
        switch (atributo_computador) {
            case 1: valor_computador = populacao2; break;
            case 2: valor_computador = pib2; break;
            case 3: valor_computador = area2; break;
            case 4: valor_computador = densidade2; break;
        }
    }

    // Mostra as escolhas
    printf("\nVocê escolheu o atributo %d (Valor: %.2f)\n", atributo_jogador, valor_jogador);
    printf("O computador escolheu o atributo %d (Valor: %.2f)\n", atributo_computador, valor_computador);

    // Verifica quem venceu
    if (atributo_jogador == 4 || atributo_computador == 4) {
        // Caso especial: Densidade (menor valor vence)
        if (valor_jogador < valor_computador) {
            printf("\nVocê venceu esta rodada!\n");
        } else if (valor_jogador > valor_computador) {
            printf("\nO computador venceu esta rodada!\n");
        } else {
            printf("\nEmpate!\n");
        }
    } else {
        // Para outros atributos, maior valor vence
        if (valor_jogador > valor_computador) {
            printf("\nVocê venceu esta rodada!\n");
        } else if (valor_jogador < valor_computador) {
            printf("\nO computador venceu esta rodada!\n");
        } else {
            printf("\nEmpate!\n");
        }
    }

    return 0;
}
