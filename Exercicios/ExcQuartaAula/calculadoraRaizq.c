#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

    // Função Raiz Quadrada
    double raizq(double valor){
        return sqrt(valor);
    }

    // Função Potencia
    double potencia(double base, double expoente){
        return pow(base, expoente);
    }

    int main(){

        //Variaveis
        char operador; // Utilizada para amarzenar os operadores.
        int operador_valido = 0, pos; // Utilizado para verificar os operadores se sao verdadeiros ou nao.
        double base, expoente, valor, resultado; // Utilizado para amarzenar os valores para os calculos.

        //Mensagem de Bem-Vindo ao sistema
        printf("------------ Bem-Vindo ao Sua Calculadora de Raiz & Potencia ------------");
        Sleep(3000);
        system("cls");

        // Solicitando ao usuário para escolher uma operação
        printf("Para selecionar a operacao que deseja digite (P) para Potencia ou (R) para Raiz Quadrada!\n");
            printf("Digite o operador: ");
        scanf(" %c", &operador);

        //Verificando o operador
        if(operador == 'P' || operador == 'R'){
            operador_valido = 1;
        }else{
            printf("O operador %c e invalido por favor tente novamente!", operador);
            Sleep(3000);
            system("cls");
        }


        //Solicitando entrada de valores para o usuário usando o loop 'for'.
        if(operador == 'R'){
            printf("Insira o numero que deseja saber a Raiz Quadrada: ");
            scanf(" %Lf", &valor);
        }else{
            printf("Digite o valor da base: ");
            scanf(" %Lf", &base);

            printf("Digite o valor do expoente: ");
            scanf(" %Lf", &expoente);
        }
        
        // Chamando as funções matematicas
        if(operador == 'R'){
            resultado = raizq(valor);
            printf("O resultado da Raiz Quadrado %Lf e = %Lf", valor, resultado);
        }else{
            resultado = potencia(base, expoente);
            printf("O resultado da Potencia e = %Lf", resultado);
        }
        return 0;
    }