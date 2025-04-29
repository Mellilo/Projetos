#include <stdio.h>

int main() {

    int idade = 0;
    float renda = 0;

    printf("\nDigite sua idade:  \n");
    scanf("%d", &idade);
    printf("\nDigite sua renda:  \n");
    scanf("%f", &renda);

if (idade >= 60 || idade <= 18) {
    if (renda < 2000) {
        printf("Você cumpriu os requesitos de renda\n");
    }
    else {
        printf("Você não cumpriu os requesitos de renda\n");
    }
            
       

}else {
    printf("Você não cumpriu os requesitos de idade\n");
    }


}
 















