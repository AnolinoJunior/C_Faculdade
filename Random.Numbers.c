#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main (){
        int numeroJogador, numeroComputador, resultado;
        char tipoComparacao;

        // Gerar Número aleatório
        srand (time(0));
        numeroComputador = rand () % 100 + 1; // Número entre 1 e 100

        // Início do jogo 
        printf("Bem vindo ao jogo Maior, Menor ou Igual!\n");
        printf("Você deve escolher um número e o tipo de comparação.\n");
        printf("M. Maior\n");
        printf("N. Menor");
        printf("I. Igual \n");

        printf("Escolha a comparação: ");
        scanf(" %c", &tipoComparacao);

        printf("Digite seu número (entre 1 e 100): "); 
        scanf(" %d", &numeroJogador);

        // exibir o número do computador 
        printf("O número do computador é : %d \n", numeroComputador);


        switch (tipoComparacao)
        {
            case 'M' :
            case 'm' :
                printf("Você escolheu Maior.\n");
                resultado = numeroJogador > numeroComputador ? 1 : 0;
                break;
            case 'N' :
            case 'n' :
                printf("Você escolheu Menor.\n");
                resultado = numeroJogador < numeroComputador ? 1 : 0;
                break;
            case 'I':
            case 'i' :
                printf("Você escolheu Igual.\n");
                resultado = numeroJogador == numeroComputador ? 1 : 0;
                break;
        default:
        printf("Opção de jogo inválida");
        break;   
        }
    printf("O número do computador é : %d e do jogador é : %d \n", numeroComputador, numeroJogador);
        if (resultado == 1) {
            printf("Você ganhou!\n");
        } else {
            printf("Você perdeu!\n");
        }
    }




    

    