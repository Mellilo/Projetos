#include <stdio.h>

int main() {

    int idade = 0;
    float renda = 0;
    int dependentes = 0;

    printf("\nDigite sua idade:  \n");
    scanf("%d", &idade);
    printf("\nDigite sua renda:  \n");
    scanf("%f", &renda);
    printf("\nDigite seus dependentes:  \n");
    scanf("%d", &dependentes);

    if (idade >= 18 && idade < 65) {
        if (renda < 3000) {
            if (dependentes > 2) {
                printf("Você está apto ao progama do governo");
            }
            else {
                printf("Você tem dependentes demais!\n");
            }
        } 
        else {
            printf("Sua renda não atendeu os requesitos\n");
        }
               
    }else{
        printf("Sua idade não atendeu os requesitos\n");
    }








}

