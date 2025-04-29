#include <stdio.h>

int main() {

// Progama para verificar se um determinado número é
// 1 : Positivo , Negativo ou Zero
// 2 : Se for positivo verificar se é par ou impar

int num = 0;

printf("\nDigite um número:  \n");
scanf("%d", &num);

if (num > 0) {
    printf("O número é positivo\n");
    if (num % 2 == 0) {
        printf("\nO número é par");
    }
    else {
        printf("O número é ímpar");
    }
}
else if (num < 0) {
    printf("O número é negativo");
}
else {
    printf("O número é zéro");
}



















}