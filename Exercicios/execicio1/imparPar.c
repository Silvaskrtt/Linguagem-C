#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

    int main(){

        // Declarando variaveis
        int num;

        // Mensagem de boas vindas, comandos para esperar 3s e limpar a tela
        printf("--------- Bem-Vindo ao Seu Verificador de Numeros Impares ou Pares ---------");
        Sleep(3000);
        system("cls");

        // Solicitando entrada de número é impar ou par
        printf("Por favor insira o numero que deseja verificar: ");
        scanf(" %d", &num);
        system("cls");

        // Verificando se o número é ímpar ou par
        if(num % 2 == 0){
            printf("O numero %d e Par!", num);
        }else{
            printf("O numero %d e Impar!", num);
        }
            return 0;
    }