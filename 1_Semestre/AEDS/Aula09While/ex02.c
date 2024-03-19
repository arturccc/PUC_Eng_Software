#include <stdio.h>

int main() {
    int num = 1;

    printf("Numeros impares entre 1 e 9:\n");
    while (num <= 9) {
        if (num % 2 != 0) {
            printf("%d ", num);
        }
        num++;
    }
    printf("\n");

    return 0;
}
