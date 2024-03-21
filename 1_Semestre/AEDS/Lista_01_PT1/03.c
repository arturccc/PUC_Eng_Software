#include <stdio.h>

int main() {
    double A, B, temp;
    
    printf("Digite o valor de A: ");
    scanf("%lf", &A);
    
    printf("Digite o valor de B: ");
    scanf("%lf", &B);
    
    temp = A;
    A = B;
    B = temp;
    
    printf("Valor final de A: %.2lf\n", A);
    printf("Valor final de B: %.2lf\n", B);
    
    return 0;
}
