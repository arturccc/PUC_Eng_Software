#include <stdio.h>

int main() {
    float tempo_segundos, velocidade_queda;
    char planeta;

    printf("Digite o tempo de queda em milissegundos: ");
    scanf("%f", &tempo_segundos);
    printf("Digite o planeta (T - Terra, V - Vênus, M - Mercúrio): ");
    scanf(" %c", &planeta);

    if (tempo_segundos <= 0) {
        printf("Tempo invalido!\n");
        return 1;
    }

    switch (planeta) {
        case 'T':
            velocidade_queda = 9.807 * tempo_segundos;
            break;
        case 'V':
            velocidade_queda = 8.87 * tempo_segundos;
            break;
        case 'M':
            velocidade_queda = 3.7 * tempo_segundos;
            break;
        default:
            printf("Planeta invalido!\n");
            return 1;
    }

    printf("A velocidade de queda no planeta %c eh: %.2f m/s\n", planeta, velocidade_queda);

    return 0;
}
