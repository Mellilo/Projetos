#include <stdio.h>


int main (){


/*
Soma (+)
Subtração (-)
Multiplicação (*)
Divisão (/)
*/

int numero1, numero2;
int soma, subtracao, multiplicacao, divisao;

printf("Entre com o numero 1:  \n");
scanf("%d", &numero1);
printf("Entre com o numero 2:  \n");
scanf("%d", &numero2);

// operacao soma
soma = numero1 + numero2;
// operacao subtracao
subtracao = numero1 - numero2;
// operacao multiplicacao
multiplicacao = numero1 * numero2;
// operacao divisao
divisao = numero1 / numero2;


printf("\n\nO resultado de soma é: %d  \n\n",soma);
printf("O resultado de subtracao é: %d  \n\n",subtracao);
printf("O resultado de multiplicao é: %d  \n\n",multiplicacao);
printf("O resultado de divisao é: %d  \n\n",divisao);


return 0;

}