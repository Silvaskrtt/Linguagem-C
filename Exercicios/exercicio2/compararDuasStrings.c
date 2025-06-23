#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

    int main(){

        // Declarando Variaveis
        char text[2][101];
        int pos, comparacao;
        
        
        // Mensagem de boas vindas
        printf("---------- Boas-Vindas ao Comparador de String ----------");
        Sleep(3000);
        system("cls");

        // Solicitando palavras para o usuário
        for(pos = 0; pos < 2; pos++){
            printf("Insira seu %d comentario de ate 100 comentarios: ", pos+1);
            fgets(text[pos], sizeof(text[pos]), stdin);
            system("cls");
        }

        // remove \n se houver
        size_t len = strlen(text[pos]);
        if(text > 0 && text[pos][len - 1] == '\n'){
            text[pos][len - 1] = '\0';
        }

        system("cls");

        // funcao para comparar as strings
        comparacao = strcmp(text[0], text[1]);

        //
        printf(" Comentario 1: %s\n", text[0]);
        printf(" Comentario 2: %s\n", text[1]);

        if(comparacao == 0){
            printf("As strings sao iguais!");
        }else{
            printf("As strings sao diferentes!");
        }
        return 0;
    }
