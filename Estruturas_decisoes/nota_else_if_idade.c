#include <stdio.h>

int main() {

int nota;

printf("Digite sua nota: \n");
scanf("%d", &nota);

// A >= 90
// B >= 80
// C >= 70
// D >= 60
// E >= 50
// F < 50

if (nota >= 90) {
    printf("Você tem nota A");
}
else if (nota >=80) {
    printf("Você tem nota B");
}
else if (nota >=70) {
    printf("Você tem nota C");
}
else if (nota >=60) {
    printf("Você tem nota D");
}
else if (nota >=50) {
    printf("Você tem nota E");
}
else {
    printf("Você tem nota F");
}


}