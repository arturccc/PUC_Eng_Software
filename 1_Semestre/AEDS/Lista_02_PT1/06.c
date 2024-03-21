#include <stdio.h>

int main() {
    int A, B, C;
    printf("Digite o valor de A: ");
    scanf("%d", &A);

    if (A <= 0) {
        printf("Valor invalido para A!\n");
        return 1;
    }

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    if (B <= 0) {
        printf("Valor invalido para B!\n");
        return 1;
    }

    printf("Digite o valor de C: ");
    scanf("%d", &C);

    if (C <= 0) {
        printf("Valor invalido para C!\n");
        return 1;
    }

    if (C % A == 0 && C % B == 0) {
        printf("Divisivel por ambos\n");
    } else if (C % A == 0 || C % B == 0) {
        printf("Divisivel por um\n");
    } else {
        printf("Nao e divisivel\n");
    }
}
