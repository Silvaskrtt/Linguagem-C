#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define TAM_NOME 50

int main() {
    int i, qtd;
    char **nomes;

    // Boas-vindas
    printf("Cadastro de Alunos\n");
    Sleep(2000);
    system("cls");

    // Quantidade de alunos
    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", &qtd);
    getchar();

    // Aloca vetor de ponteiros
    nomes = (char **)malloc(qtd * sizeof(char *));
    if (nomes == NULL){
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Cadastro dos nomes
    for(i = 0; i < qtd; i++){
        nomes[i] = (char *)malloc(TAM_NOME * sizeof(char));
        if(nomes[i] == NULL){
            printf("Erro ao alocar memória para o nome do aluno %d.\n", i + 1);
            // Libera os anteriores
            for (int j = 0; j < i; j++) {
                free(nomes[j]);
            }
            free(nomes);
            return 1;
        }

        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(nomes[i], TAM_NOME, stdin);

        nomes[i][strcspn(nomes[i], "\n")] = '\0';
    }

    // Exibe todos os nomes
    printf("\nLista de Alunos Cadastrados:\n");
    for(i = 0; i < qtd; i++){
        printf("%d. %s\n", i + 1, nomes[i]);
    }

    // Libera memória
    for(i = 0; i < qtd; i++){
        free(nomes[i]);
    }
    free(nomes);

    return 0;
}