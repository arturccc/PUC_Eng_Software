#include <stdio.h>

int main() {
    char estado;
    float valor_produto, imposto, preco_final;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor_produto);
    printf("Digite o estado de destino (MG, SP, RJ, ES): ");
    scanf(" %c", &estado);

    switch (estado) {
        case 'M':
        case 'm':
            imposto = 0.07;
            break;
        case 'S':
        case 's':
            imposto = 0.12;
            break;
        case 'R':
        case 'r':
            imposto = 0.15;
            break;
        case 'E':
        case 'e':
            imposto = 0.08;
            break;
        default:
            printf("Estado invalido!\n");
            return 1;
    }

    preco_final = valor_produto * (1 + imposto);

    printf("O preco final do produto para o estado %c e: %.2f\n", estado, preco_final);
}

