#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

    int main(){

        //
        char text[100];
        int contador;

        // Mensagem de boas vindas
        printf("----------- Bem-Vindo ao Verificado de Strings! -----------");
        Sleep(3000);
        system("cls");

        // Solicitando palavras para o usuário
        printf("Por favor, adicione um comentario ate 100 caracteres!\n");
        printf("Escreva aqui: ");
        fgets(text, sizeof(text), stdin); // Usando o fgets para capturar os espaços
        system("cls");

        //
        size_t len = strlen(text);
        if(text[len - 1] == '\n'){
            text[len - 1] = '\0';
            len--;
        }
        
        printf("O que voce digitou: %s\n", text);
        printf("Total de caracteres: %zu\n", len);

        return 0;
    }