//1. O que é Manipulação de Bits?

//Manipulação de bits é o processo de ajustar ou modificar valores em nível de bit, o nível mais baixo de dados digitais. Cada bit é uma unidade de informação que pode ser 0 ou 1, e a manipulação de bits envolve operações que alteram, analisam ou utilizam esses bits diretamente. Essas operações são fundamentais em várias áreas da computação, como programação de sistemas, redes e criptografia.

//2. Qual a Importância da Manipulação de Bits?

//A manipulação de bits é crucial para:

//Eficiência: Permite a realização de operações rápidas e diretas, muitas vezes mais eficientes do que operações em nível de byte ou palavra.
//Armazenamento e Compressão: Ajuda na compactação de dados, economizando espaço de armazenamento.
//Comunicação e Protocolos: É essencial para implementar protocolos de comunicação e manipular dados em redes.
//Criptografia e Segurança: Utilizada em algoritmos de criptografia para manipular dados de forma segura e eficaz.
//Hardware: Fundamental para o controle e a programação de hardware, onde as operações são realizadas em nível de bit.
//3. Quais são as Operações Básicas de Manipulação de Bits?
//AND bit a bit (&): Realiza a operação lógica E entre cada par de bits correspondentes de dois números.
//OR bit a bit (|): Realiza a operação lógica OU entre cada par de bits correspondentes de dois números.
//XOR bit a bit (^): Realiza a operação lógica OU exclusivo entre cada par de bits correspondentes de dois números.
//NOT bit a bit (~): Inverte todos os bits (transforma 0 em 1 e 1 em 0).
//Deslocamento à esquerda (<<): Move os bits para a esquerda, preenchendo com 0 nos bits menos significativos.
//Deslocamento à direita (>>): Move os bits para a direita, preenchendo com o bit mais significativo (para números positivos) ou com 1 (para números negativos).
//4. Exemplo em Linguagem C
#include <stdio.h>

// Função para exibir os bits de um número
void exibirBits(unsigned int num) {
    int i;
    for (i = sizeof(num) * 8 - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 8 == 0) printf(" "); // Espaçamento a cada byte
    }
    printf("\n");
}

int main() {
    unsigned int numero = 29; // Exemplo de número em decimal
    unsigned int resultado;

    printf("Número original: %u\n", numero);
    printf("Bits do número original: ");
    exibirBits(numero);

    // Operação AND bit a bit
    resultado = numero & 15; // 15 em binário é 0000 1111
    printf("Número após AND com 15: %u\n", resultado);
    printf("Bits após AND com 15: ");
    exibirBits(resultado);

    // Operação OR bit a bit
    resultado = numero | 8; // 8 em binário é 0000 1000
    printf("Número após OR com 8: %u\n", resultado);
    printf("Bits após OR com 8: ");
    exibirBits(resultado);

    // Operação XOR bit a bit
    resultado = numero ^ 7; // 7 em binário é 0000 0111
    printf("Número após XOR com 7: %u\n", resultado);
    printf("Bits após XOR com 7: ");
    exibirBits(resultado);

    // Operação NOT bit a bit
    resultado = ~numero;
    printf("Número após NOT: %u\n", resultado);
    printf("Bits após NOT: ");
    exibirBits(resultado);

    // Deslocamento à esquerda
    resultado = numero << 2; // Desloca os bits de número 2 posições à esquerda
    printf("Número após deslocamento à esquerda por 2: %u\n", resultado);
    printf("Bits após deslocamento à esquerda por 2: ");
    exibirBits(resultado);

    // Deslocamento à direita
    resultado = numero >> 2; // Desloca os bits de número 2 posições à direita
    printf("Número após deslocamento à direita por 2: %u\n", resultado);
    printf("Bits após deslocamento à direita por 2: ");
    exibirBits(resultado);

    return 0;
}
