1. Calculadora Simples

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Soma: %d\n", num1 + num2);
    printf("Subtração: %d\n", num1 - num2);
    printf("Multiplicação: %d\n", num1 * num2);
    if (num2 != 0) {
        printf("Divisão: %f\n", (float)num1 / num2);
    } else {
        printf("Erro: divisão por zero!\n");
    }

    return 0;
}


2. Conversão de Temperatura

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;
    printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}


3. Verificação de Número Par

#include <stdio.h>

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("O número é par!\n");
    } else {
        printf("O número é ímpar!\n");
    }

    return 0;
}


4. Cálculo de Média Ponderada

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    printf("Digite a nota 1 (peso 2): ");
    scanf("%f", &nota1);

    printf("Digite a nota 2 (peso 3): ");
    scanf("%f", &nota2);

    printf("Digite a nota 3 (peso 5): ");
    scanf("%f", &nota3);

    media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;
    printf("Média ponderada: %.2f\n", media);

    return 0;
}

5. Troca de Valores

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("Novo valor do primeiro número: %d\n", num1);
    printf("Novo valor do segundo número: %d\n", num2);

    return 0;
}
