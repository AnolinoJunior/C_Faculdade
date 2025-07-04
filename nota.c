#include <stdio.h>
int main (){
    int opcao;
    float nota1, nota2, media;

    printf("Menu de Gerenciamento de Estudantes\n"); 
    printf("1. Calcular Média\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao){

        case 1:
        printf("Calcular Média\n");
        printf("Digite a nota 1: ");
        scanf("%f", &nota1);
        printf("Digite a nota 2: ");
        scanf("%f", &nota2);
        // Testar a condição se a nota é >= 0  e <= 10
        if((nota1 >= 0 && nota1 <=10) && (nota2 >=0 && nota2 <=10)) {
            media = (nota1 + nota2) / 2 ;
            printf("A média é %.2f \n", media);
        } else {
            printf("Entrada com valores errado de notas\n");
        }
        break;
        case 2:
        printf("Determinar Status\n");
        printf("Entrar com a média:");
        scanf("%f", &media);
        // media 5 => ? printf ("Aprovado") : printf("Reprovado");
        if (media >= 5) {
            printf("Aprovado\n");
        } else if (media < 5 && media >= 0) {
            printf("Recuperação\n");
        } else {
            printf("Média inválida. Deve ser entre 0 e 10.\n");
        }
        case 3:
        printf("Sair\n");
        default:
        printf("Opção inválida. Tente novamente.\n");
        break;
    }

   
}