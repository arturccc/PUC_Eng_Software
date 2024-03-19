#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    float nota, soma = 0;
    int i;

    for (i = 1; i <= 10; i++) { //defina <= para repetir 10x
        printf("Insira a nota %d: ", i);
        scanf("%f", &nota);

        soma += nota; //salva cada nota e adicona na soma
    }

    float media = soma / 10;

    printf("A media aritmetica das notas e: %.2f\n", media);
}
