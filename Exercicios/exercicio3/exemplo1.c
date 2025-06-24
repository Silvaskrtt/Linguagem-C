#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

    int main(){

        int soma, alunos, avaliacao;
        float notas[3][2];


        // Preenchimento e Impressão
        for(alunos = 0; alunos < 3; alunos++){
            for(avaliacao = 0; avaliacao < 2; avaliacao++){
                printf("Ola aluno %d. Digite sua %d nota: ", alunos+1, avaliacao+1);
                scanf(" %f", &notas[alunos][avaliacao]);
                system("cls");
            }
        }
        for(alunos = 0; alunos < 3; alunos++){
            soma = 0;
            for(avaliacao = 0; avaliacao < 2; avaliacao++){
                soma += notas[alunos][avaliacao];
            }
        
        printf("Media do aluno %d = %.1f\n", alunos+1, soma / 2.0);
        
    }
        return 0;
}