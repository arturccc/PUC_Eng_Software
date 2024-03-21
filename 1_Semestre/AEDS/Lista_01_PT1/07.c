#include <stdio.h>

int main() {
    int a,b,c,d=1; //seta o valor de a, c e d com 1 (todas elas)
    a = -2; //troca o valor de a para -2
    b = a*a; //troca a valor de b para -2*-2 = 4
    c = d++; //troca o valor de c para d + 1 = 2
    d = c++ + 5; // troca a valor de d para c + 1 + 5 = 8
    d = ++c + 5; // troca valor de para 1 + c + 5 = 8
    printf ("%d %d %d %d", a, b, c, d);
}