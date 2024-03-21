#include <stdio.h>

int main() {
    float numero;
    float maior, menor, meio;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero);
    maior = menor = meio = numero;

    for (int i = 1; i < 3; ++i) {
        printf("Digite o proximo numero: ");
        scanf("%f", &numero);

        if (numero > maior) {
            meio = maior;
            maior = numero;
        }
        else if (numero < menor) {
            meio = menor;
            menor = numero;
        }
        else {
            meio = numero;
        }
    }

    printf("Maior numero: %.2f\n", maior);
    printf("Elemento do meio: %.2f\n", meio);
}
