#include <stdio.h>

int main() {
    int n;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    
    int sucessor = n + 1;
    printf("O sucessor de %d eh: %d\n", n, sucessor);
    
    return 0;
}
