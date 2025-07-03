#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int opcao;
    int numeroSecreto, palpite;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);


    switch(opcao) {
    case 1 :  
    srand(time(0));
    numeroSecreto = rand() % 10; 
    printf("Bem-vindo ao jogo! Tente adivinhar o número secreto entre 0 e 9: \n");
    scanf("%d", &palpite);
    if (palpite == numeroSecreto) {
        printf("Parabéns! Você adivinhou o número secreto: %d\n", numeroSecreto);
    } else {
        printf("Que pena! O número secreto era: %d. Tente novamente!\n", numeroSecreto);
    }
    break;
    case 2:
    printf("Regras do Jogo:\n");
    printf("1. O computador escolherá um número secreto entre 0 e 9.\n");
    printf("2. Você deve tentar adivinhar o número secreto.\n");            
    printf("3. Se você adivinhar corretamente, você ganha!\n");
    printf("4. Se errar, o jogo informará qual era o número secreto.\n");
    printf("5. Você pode jogar quantas vezes quiser.\n");   
    printf("6. Para sair do jogo, escolha a opção 3 no menu principal.\n");
    printf("7. Boa sorte!\n");
    break;
    case 3:
    printf("Você escolheu sair do jogo.\n");
    printf("Obrigado por jogar!\n");
        printf("Saindo do jogo...\n");
        exit(0);  
    }
}