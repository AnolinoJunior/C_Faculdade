#include <stdio.h>
 int main (){
     int dia;
     printf("Digite um número: ");
     scanf("%d", &dia);
     
     switch (dia) {
         case 1:
             printf("Domingo \n");
             break;
         case 2:
             printf("Segunda\n");
             break;
         case 3:
             printf("terça-feira\n");
             break;
            case 4:
             printf("Quarta-feira\n");
             break;
            case 5:
             printf("Quinta-feira\n");
             break;
            case 6: 
                printf("Sexta-feira\n");
                break;
         default:
             printf("Sábado\n");
     }
     
     return 0;
 }