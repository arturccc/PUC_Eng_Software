#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    int numeros[15]; //cria um array de 15 espaços
    int numero, fatorial = 1;
    
    // Solicita ao usuário que insira o número
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    // Calcula o fatorial do número
    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }

    // Exibe o valor lido e o fatorial na tela
    printf("O fatorial de %d é: %d", numero, fatorial);
}