#include <stdio.h>

int main() {
    int eleitores, votos_brancos, votos_nulos, votos_validos;
    float percentual_brancos, percentual_nulos, percentual_validos;
    
    printf("Digite a quantidade de eleitores: ");
    scanf("%d", &eleitores);
    
    printf("Digite o número de votos brancos: ");
    scanf("%d", &votos_brancos);
    
    printf("Digite o número de votos nulos: ");
    scanf("%d", &votos_nulos);
    
    printf("Digite o número de votos válidos: ");
    scanf("%d", &votos_validos);
    
    percentual_brancos = (float)votos_brancos / eleitores * 100;
    percentual_nulos = (float)votos_nulos / eleitores * 100;
    percentual_validos = (float)votos_validos / eleitores * 100;
    
    printf("\nPercentual de votos brancos: %.2f%%\n", percentual_brancos);
    printf("Percentual de votos nulos: %.2f%%\n", percentual_nulos);
    printf("Percentual de votos válidos: %.2f%%\n", percentual_validos);
    
    return 0;
}
