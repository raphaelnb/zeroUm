#include <stdio.h>

int main() {
    // Armazena os valores de entrda
    int a, b, c;
    
    // Recebe os valores de entrada
    scanf("%d %d %d", &a, &b, &c);

    // Caso A seja diferente
    if (a != b && a != c) {
        printf("a\n");
    // Caso B seja diferente
    } else if (b != a && b != c) {
        printf("b\n");
    // Caso C seja diferente
    } else if (c != a && c != b) {
        printf("c\n");
    } else {
    // Caso de empate
        printf("empate\n");
    }
    return 0;
}