Atividade 1: Ler 5 números inteiros e calcular a soma usando Array Unidimensional

#include <stdio.h>

int main() {
    int numeros[5];
    int soma = 0;

    // Ler os números do usuário
    for (int i = 0; i < 5; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Calcular a soma dos números
    for (int i = 0; i < 5; i++) {
        soma += numeros[i];
    }

    printf("A soma dos números é: %d\n", soma);

    return 0;
}


Atividade 2: Ler uma matriz 3x3 e calcular a soma dos elementos da diagonal principal usando Array Multidimensional


#include <stdio.h>

int main() {
    int matriz[3][3];
    int soma = 0;

    // Ler os elementos da matriz do usuário
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calcular a soma dos elementos da diagonal principal
    for (int i = 0; i < 3; i++) {
        soma += matriz[i][i];
    }

    printf("A soma dos elementos da diagonal principal é: %d\n", soma);

    return 0;
}
