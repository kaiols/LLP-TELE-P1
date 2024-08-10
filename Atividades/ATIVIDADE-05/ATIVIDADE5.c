//Atividade 1: Exibir números pares de 1 a 10 com while
#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 10) {
        if (i % 2 == 0) {
            printf("%d é par\n", i);
        }
        i++;
    }
    return 0;
}
//Atividade 2: Adivinhar um número entre 1 e 100 com do while
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int numero_secreto = rand() % 100 + 1;
    int chute;

    do {
        printf("Adivinhe um número entre 1 e 100 (-1 para sair): ");
        scanf("%d", &chute);

        if (chute == -1) {
            printf("Você desistiu!\n");
            break;
        }

        if (chute < numero_secreto) {
            printf("Seu chute é baixo!\n");
        } else if (chute > numero_secreto) {
            printf("Seu chute é alto!\n");
        } else {
            printf("Você acertou!\n");
            break;
        }
    } while (1);

    return 0;
}
//Atividade 3: Calcular a soma dos primeiros 10 números inteiros positivos com for
#include <stdio.h>

int main() {
    int soma = 0;
    for (int i = 1; i <= 10; i++) {
        soma += i;
    }
    printf("A soma dos primeiros 10 números inteiros positivos é: %d\n", soma);
    return 0;
}