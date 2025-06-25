#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
    
    int main() {
        //Bem-vindo
        printf("---------- Bem-Vindo ----------\n");

        //Declarando variaveis
        char nome[20];

        // Solicita o nome do usuário
        printf("Digite seu nome: ");
        scanf(" %s", nome);
        
        printf("Nome: %s", nome);
        return 0;
    }