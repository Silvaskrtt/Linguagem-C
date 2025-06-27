#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    int linhas, colunas, i, j, soma = 0;

    // Mensagem de boas vindas
    printf("Bem-vindo a sua matriz dinamica!\n");
    Sleep(2000);
    system("cls");

    // Solicita tamanho da matriz
    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);

    // Aloca memória para as linhas
    int **matriz = (int **)malloc(linhas * sizeof(int *));
    if(matriz == NULL){
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    // Aloca memória para cada coluna
    for(i = 0; i < linhas; i++){
        matriz[i] = (int *)malloc(colunas * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Erro ao alocar memoria.\n");
            // Libera memória
            for(j = 0; j < i; j++){
                free(matriz[j]);
            }
            free(matriz);
            return 1;
        }
    }

    // calcula a soma
    for(i = 0; i < linhas; i++){
        for (j = 0; j < colunas; j++) {
            printf("Digite o valor para [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    // Exibe a soma
    printf("\nA soma de todos os elementos e = %d\n", soma);

    // Libera a memória
    for(i = 0; i < linhas; i++){
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}