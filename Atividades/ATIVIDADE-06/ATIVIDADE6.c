//Atividade 1: Array Unidimensional
#include <stdio.h>

int main() {
    int numeros[5]; // Declaração do array
    int soma = 0; // Variável para armazenar a soma

    // Loop para ler os números
    for (int i = 0; i < 5; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Loop para calcular a soma
    for (int i = 0; i < 5; i++) {
        soma += numeros[i];
    }

    printf("A soma dos números é: %d\n", soma);

    return 0;
}
//Atividade 2: Array Multidimensional (Matriz)
#include <stdio.h>

int main() {
    int matriz[3][3]; // Declaração da matriz
    int soma = 0; // Variável para armazenar a soma

    // Loop para ler os elementos da matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Loop para calcular a soma da diagonal principal
    for (int i = 0; i < 3; i++) {
        soma += matriz[i][i];
    }

    printf("A soma dos elementos da diagonal principal é: %d\n", soma);

    return 0;
}
//