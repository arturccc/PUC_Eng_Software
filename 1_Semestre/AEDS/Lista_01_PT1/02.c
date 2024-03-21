#include <stdio.h>

int main() {
    float n1, n2, n3;
    
    printf("Digite o valor da primeira nota: ");
    scanf("%f", &n1);
    printf("Digite o valor da segunda nota: ");
    scanf("%f", &n2);
    printf("Digite o valor da terceira nota: ");
    scanf("%f", &n3);
    
    float soma = n1 + n2 + n3;
    
    float media = soma / 3;
    
    float produto = n1 * n2 * n3;
    
    printf("Soma das notas: %.2f\n", soma);
    printf("Media das notas: %.2f\n", media);
    printf("Produto das notas: %.2f\n", produto);
    
    return 0;
}
