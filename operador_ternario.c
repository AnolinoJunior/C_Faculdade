#include <stdio.h>

int main (){

    int idade = 20;
    int resultado;

   resultado = idade >= 18 ? 1 : 0;
   if (resultado == 1)
       printf("Maior de idade\n");
   else
       printf("Menor de idade\n");
   
   
}