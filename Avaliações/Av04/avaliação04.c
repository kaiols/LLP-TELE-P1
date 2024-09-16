#include <stdio.h>

typedef struct {
    int matricula;
    char nome[20];
    float N1;
    float N2;
    float Media;
    int Faltas;
    char Reprovado_SN;
} Aluno;

// Função para verificar a aprovação dos alunos
void verifica_aprovacao(Aluno *alunos, int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        // Verificar se o aluno está reprovado por falta
        if (alunos[i].Faltas >= 20) {
            alunos[i].Reprovado_SN = 'S';
        } else {
            alunos[i].Reprovado_SN = 'N';
        }

        // Calcular a média
        alunos[i].Media = (alunos[i].N1 + alunos[i].N2) / 2;
    }
}

// Função para mostrar a aprovação dos alunos
void mostra_aprovacao(Aluno *alunos, int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Nome: %s\n", alunos[i].nome);
        printf("N1: %.2f\n", alunos[i].N1);
        printf("N2: %.2f\n", alunos[i].N2);
        printf("Faltas: %d\n", alunos[i].Faltas);
        printf("Média: %.2f\n", alunos[i].Media);

        if (alunos[i].Reprovado_SN == 'S') {
            printf("REPROVADO POR FALTA\n\n");
        } else if (alunos[i].Media < 6.0) {
            printf("REPROVADO POR MEDIA\n\n");
        } else {
            printf("APROVADO\n\n");
        }
    }
}

int main() {
    Aluno alunos[5] = {
        {1, "Mateus", 8.5, 9.5, 0.0, 10,' '},
        {2, "Natalia", 9.0, 8.0, 0.0, 5,' '},
        {3, "Otavio", 7.0, 8.5, 0.0, 12,' '},
        {4, "Patricia", 9.5, 9.0, 0.0, 8,' '},
        {5, "Rafael", 8.0, 8.5, 0.0, 15,' '}
    };

    verifica_aprovacao(alunos, 5);
    mostra_aprovacao(alunos, 5);

    return 0;
}