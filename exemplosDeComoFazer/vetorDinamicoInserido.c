#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor;
    int n, i;

    printf("Quantos numeros deseja armazenar? ");
    scanf("%d", &n);

    // Alocando memória para n inteiros
    vetor = (int *) malloc(n * sizeof(int));

    if (vetor == NULL) {
        printf("Erro de alocação de memoria!\n");
        return 1;
    }

    // Preenchendo o vetor
    for (i = 0; i < n; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Exibindo o vetor
    printf("\nConteudo do vetor:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    // Liberando a memória
    free(vetor);

    return 0;
}