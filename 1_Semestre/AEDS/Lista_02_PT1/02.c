#include <stdio.h>

int main() {
    float numeros[5];
    float maior, menor, amplitude;

    printf("Digite cinco numeros:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Numero %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    maior = menor = numeros[0];

    for (int i = 1; i < 5; ++i) {
        if (numeros[i] > maior)
            maior = numeros[i];
        if (numeros[i] < menor)
            menor = numeros[i];
    }

    amplitude = maior - menor;

    printf("A amplitude total e: %.2f\n", amplitude);
}
