#include <stdio.h>

int main() {
    int numero = 101; // Começando do primeiro número inteiro maior que 100
    int contador = 0;

    printf("Os 10 primeiros numeros inteiros maiores que 100 sao:\n");
    while (contador < 10) {
        printf("%d\n", numero);
        numero++;
        contador++;
    }

    return 0;
}