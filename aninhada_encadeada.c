#include <stdio.h>
    int main (){
        int numero;

        printf ("Digite um número :");
        scanf("%d", &numero);
        
        if (numero > 0){
           if (numero % 2  == 0)
           {
            printf(" Numero par");
           } else {
            printf (" Numero impar");
           }
        } else if ( numero == 0) {
            printf ("Numero é ZERO");
        } else {
            printf(" Numero é negativo");
        }
        



        
    }