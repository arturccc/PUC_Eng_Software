#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    int numeros[15]; //cria um array de 15 espaços
    int i, maior, menor;

    printf("Digite 15 numeros:\n");
    for (i = 0; i < 15; i++) { // i <15 para repetir 15x
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    maior = menor = numeros[0]; // inicalizar o loop abaixo

    for (i = 1; i < 15; i++) { //inicia um loop para verificar se o numero é amiro ou menor que o proximo indice(index) que vira na repetição 
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    printf("O maior numero digitado: %d\n", maior);
    printf("O menor numero digitado: %d\n", menor);
}