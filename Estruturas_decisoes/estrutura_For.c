#include <stdio.h>

int main() {
    int i;
 // For contando valores
 for (int i = 0; i < 5; i++) {
    printf("%d\n", i);
}

 // For contando valores de 10 em 10
for (int i = 0; i <= 50; i += 10) {
    printf("%d\n", i);
}
// For contagem regressiva 
for (int i = 5; i > 0; i--) {
    printf("%d\n", i);
}


return 0;
}
