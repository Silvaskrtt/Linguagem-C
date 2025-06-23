#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

    float conversor(float c){
        float resultadoCon;
        resultadoCon = (c * 9/5)+32;
        return(resultadoCon);
    }

    int main(){
        // Variaveis
        float c, resultadoCon;

        // Mensagem de boas vindas, comando para esperar 3s e apagar a mensagem
        printf("------------- Bem-Vindo ao seu conversor de temperatura -------------");
        Sleep(3000);
        system("cls");

        // Entrada do valor a ser convertido para °F
        printf("Por favor, digite o valor para ser convertido de Celsius para Fahrenheit!\n");
        printf("Digite aqui: ");
        scanf(" %f", &c);
        system("cls");

        //Chamando a funçao de conversão
        resultadoCon = conversor(c);
        printf("O valor de Celsius %f convertido para  e igual a = F %f", c, resultadoCon);
        return 0;
    }