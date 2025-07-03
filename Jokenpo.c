#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Jogo de Jokenpo (Pedra, Papel e Tesoura)
// Este programa permite que o usuário jogue Jokenpo contra o computador.
int main () {                                                                                   
    int escolhaJogador, escolhaComputador;      
     char jogarnovamente;
    // Inicializa o gerador de números aleatórios
    printf("Bem-vindo ao Jogo de Jokenpo!\n");  
    srand(time(0)); // Inicializa o gerador de números aleatórios
    do {    
    // Solicita a escolha do jogador
    printf("\n");
    printf("Jogo de Jokenpo\n");
    printf("Escolha uma opção: \n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");      
    printf("3 - Tesoura\n");
    printf("Digite sua escolha (1, 2 ou 3): ");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() % 3 + 1; // Gera um número aleatório entre 1 e 3
    
    switch (escolhaJogador) {
        case 1:
            printf("Você escolheu Pedra.\n");
            break;
        case 2:
            printf("Você escolheu Papel.\n");
            break;
        case 3:
            printf("Você escolheu Tesoura.\n");
            break;  
        default:
            printf("Escolha inválida! Por favor, escolha 1, 2 ou 3.\n");
            return 1; // Encerra o programa se a escolha for inválida
    }

    switch (escolhaComputador)  {
        case 1:
            printf("O computador escolheu Pedra.\n");
            break;
        case 2:
            printf("O computador escolheu Papel.\n");
            break;
        case 3:
            printf("O computador escolheu Tesoura.\n");
            break;  
    }      
    // Verifica o resultado do jogo
    if (escolhaJogador == escolhaComputador) {
        printf("Empate!\n");
    } else if ((escolhaJogador == 1 && escolhaComputador == 3) || 
               (escolhaJogador == 2 && escolhaComputador == 1) || 
               (escolhaJogador == 3 && escolhaComputador == 2)) {
        printf("Você ganhou!\n");
    } else {
        printf("Você perdeu!\n");   
    }
    printf("Deseja jogar novamente? (s/n): ");
    scanf(" '%c", &jogarnovamente);
} while (jogarnovamente == 's' || jogarnovamente == 'S');       

return 0;    
}

