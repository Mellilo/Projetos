#include <stdio.h>

int main() {
    float umidade = 0;
    float temperatura = 0;
    int estoque = 0;

    printf("Digite a umidade do local: ");
    scanf("%f", &umidade);
    printf("Digite a temperatura do local: ");
    scanf("%f", &temperatura);
    printf("Digite o estoque do armazém: ");
    scanf("%d", &estoque);

    if (umidade > 25 || temperatura > 23 || estoque > 78) {
        printf("\nArmazém operacional\n");
    } else if (umidade > 20 || temperatura > 20 || estoque > 50) {
        printf("\nVamos nos atentar aos indicadores\n");
    } else {
        printf("\nO armazém está em nível crítico\n");
    }

    return 0;
}
