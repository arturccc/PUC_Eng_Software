#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    printf("Escolha a operacao matematica:\n");
    printf("1. Soma\n");
    printf("2. Subtracao\n");
    printf("3. Multiplicacao\n");
    printf("4. Divisao\n");
    printf("5. Modulo\n");

    printf("Digite o numero da operacao desejada (1 a 5): ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 5) {
        printf("Opcao invalida!\n");
        return 1;
    }

    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);
    printf("Digite o segundo valor: ");
    scanf("%f", &num2);

    switch (opcao) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado da soma: %.2f\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Resultado da subtracao: %.2f\n", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("Resultado da multiplicacao: %.2f\n", resultado);
            break;
        case 4:
            if (num2 == 0) {
                printf("Erro: divisao por zero!\n");
                return 1;
            }
            resultado = num1 / num2;
            printf("Resultado da divisao: %.2f\n", resultado);
            break;
        case 5:
            resultado = (int)num1 % (int)num2;
            printf("Resultado do modulo: %.2f\n", resultado);
            break;
    }
}
