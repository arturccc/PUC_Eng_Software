#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, raiz_delta, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    if (delta >= 0) {
        raiz_delta = sqrt(delta);

        x1 = (-b + raiz_delta) / (2 * a);
        x2 = (-b - raiz_delta) / (2 * a);

        printf("As raizes da equacao sao: x1 = %.2f e x2 = %.2f\n", x1, x2);
    } else {
        printf("A equacao nao possui raizes reais.\n");
    }
}
