#include <stdio.h>
#include <string.h>

int main() {
    FILE *arquivo;
    char linha[100];

    // 1. Create a file to store text lines
    arquivo = fopen("meu_arquivo.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar arquivo!\n");
        return 1;
    }

    // 2. Feed the file with data entered from the keyboard
    printf("Digite as linhas de texto (digite 'sair' para terminar):\n");
    while (1) {
        printf("> ");
        fgets(linha, 100, stdin);
        linha[strcspn(linha, "\n")] = 0; // remove newline character
        if (strcmp(linha, "sair") == 0) {
            break;
        }
        fprintf(arquivo, "%s\n", linha);
    }

    // 5. Close the file
    fclose(arquivo);

    // 6. Open the file in read mode
    arquivo = fopen("meu_arquivo.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo para leitura!\n");
        return 1;
    }

    // 7. Read each line from the file and display it on the screen
    printf("Conteúdo do arquivo:\n");
    while (fgets(linha, 100, arquivo) != NULL) {
        printf("%s", linha);
    }

    // 8. Close the file
    fclose(arquivo);

    return 0;
}