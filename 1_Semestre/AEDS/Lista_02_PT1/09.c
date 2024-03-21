#include <stdio.h>
#include <math.h>

int main() {
    int w, x, y, z;
    float resultado;

    printf("Digite quatro numeros inteiros positivos (w, x, y, z): ");
    scanf("%d %d %d %d", &w, &x, &y, &z);

    if (w <= 0 || x <= 0 || y <= 0 || z <= 0) {
        printf("Os numeros devem ser positivos.\n");
        return 1;
    }

    switch (w) {
        case 1:
            resultado = sqrt(x * y * z);
            printf("Media Geometrica: %.2f\n", resultado);
            break;
        case 2:
            resultado = (x + 2 * y + 3 * z) / 6.0;
            printf("Media Ponderada: %.2f\n", resultado);
            break;
        case 3:
            resultado = 3 / (1.0 / x + 1.0 / y + 1.0 / z);
            printf("Media Harmonica: %.2f\n", resultado);
            break;
        case 4:
            resultado = (x + y + z) / 3.0;
            printf("Media Aritmetica: %.2f\n", resultado);
            break;
        default:
            printf("Valor de w invalido.\n");
            return 1;
    }
}
