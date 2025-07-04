#include <stdio.h>

int main () {

    int num1 = 30, num2 = 50;
    int maior;

    num1 > num2 ? (maior = num1) : (maior =num2);
    printf("O maior numero é: %d\n", maior);

    if (num1 > num2) {
        printf("O maior numero é: %d\n", num1);
    } else {
        printf("O maior numero é: %d\n", num2);
    }
}