#include <stdio.h>
#include <math.h>

double calcularDistancia(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    double x1, y1, x2, y2;
    
    printf("Digite as coordenadas do primeiro ponto (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);
    
    printf("Digite as coordenadas do segundo ponto (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    double distancia = calcularDistancia(x1, y1, x2, y2);
    
    printf("A distancia euclidiana entre os pontos (%.2f, %.2f) e (%.2f, %.2f) eh: %.2f\n", x1, y1, x2, y2, distancia);
    
    return 0;
}
