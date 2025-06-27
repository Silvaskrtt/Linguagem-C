#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Função para calcular a média das notas
float mediaNota(float *vetor, int tamanho) {
    float soma = 0.0;
    for(int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma / tamanho;
}

int main() {
    float *notas, media;
    int quantidadeAlunos, i, acimaDaMedia = 0;

    // Mensagem de boas Vindas
    printf("------------ Seja bem vindo ao calculador de media ------------");
    Sleep(3000);
    system("cls");

    // Solicita o número de alunos
    printf("Quantos alunos fizeram a prova? -> ");
    scanf("%d", &quantidadeAlunos);

    // Aloca memória para armazenar as notas
    notas = (float *)malloc(quantidadeAlunos * sizeof(float));
    if(notas == NULL){
        printf("Erro ao alocar memeria!\n");
        return 1;
    }

    system("cls");

    // Recebe as notas dos alunos
    for(i = 0; i < quantidadeAlunos; i++){
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    // Calcula a média
    media = mediaNota(notas, quantidadeAlunos);
    printf("\nMedia das notas: %.2f\n", media);

    // Conta quantos alunos ficaram acima da média
    for(i = 0; i < quantidadeAlunos; i++){
        if (notas[i] > media) {
            acimaDaMedia++;
        }
    }

    printf("Quantidade de alunos acima da media: %d\n", acimaDaMedia);

    // Libera a memória alocada
    free(notas);
    return 0;
}