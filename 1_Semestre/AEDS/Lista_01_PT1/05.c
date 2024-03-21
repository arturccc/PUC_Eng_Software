#include <stdio.h>

int main() {
    float capital, taxa_juros, juros, valor_acumulado;
    int meses;

    printf("Digite o valor a ser investido: ");
    scanf("%f", &capital);

    printf("Digite a taxa de juros mensal (em porcentagem): ");
    scanf("%f", &taxa_juros);

    printf("Digite o número de meses da aplicação: ");
    scanf("%d", &meses);

    valor_acumulado = capital;
    for (int i = 0; i < meses; i++) {
        juros = valor_acumulado * taxa_juros / 100;
        valor_acumulado += juros;
    }

    float juros_rendidos = valor_acumulado - capital;

    printf("\nValor total acumulado ao final do periodo: %.2f\n", valor_acumulado);
    printf("Valor de juros rendidos: %.2f\n", juros_rendidos);

    return 0;
}
