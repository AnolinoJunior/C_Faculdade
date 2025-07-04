#include <stdio.h> 

int main (){
    int temperatura = 28;
    int resultado;

   resultado = temperatura > 18 ? 1 : 0;
   if (resultado == 1)
       printf("Dia quente\n");
   else
       printf("Dia frio\n");


}