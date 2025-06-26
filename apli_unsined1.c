#include <stdio.h>
    int main(){
        char produtoA[20] = " Produto A"; // Criei uma variável Char com 20 no max.
        char produtoB[20] = " Produto B";

        unsigned int estoqueA = 1000;// Variável utilizando modificador
        unsigned int estoqueB  = 2000;// Unsigned não pode ser negativo

        float valorA = 10.50;// Usei float para o valor do produto 
        float valorB = 20.40;// pois não terá muitas casas decimais
        
        unsigned int estoqueMinA = 500; // Estoque mínimo para controle de produtos
        unsigned int estoqueMinB = 2500;
        
        int resultadoA, resultadoB; // Comparação do estoque máximo com o mínimo

        // Exibir as informações dos produtos 
        printf("Produto %s tem estoque %u e o valor unitario é %.2f\n", produtoA, estoqueA, valorA);
        printf("Produto %s tem estoque %u e o valor unitario é %.2f\n", produtoB, estoqueB, valorB);
        // Comparações com o valor mínimo de estoque
        resultadoA = estoqueA > estoqueMinA;
        resultadoB = estoqueB > estoqueMinB;

        printf("O Produto %s tem estoque minimo %d\n", produtoA, resultadoA);
        printf("O produto %s tem estoque minimo %d\n", produtoB, resultadoB);

        // Comparações entre os valores totais dos produtos
        printf("O valor total de A (%.2f) é maior que o valor total de B (%.2f)? : %d\n",
            estoqueA * valorA,
            estoqueA * valorB,
            (estoqueA * valorA) > (estoqueB * valorB));    


    }