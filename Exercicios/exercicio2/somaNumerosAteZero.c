#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

    // Função para somar dois números
    double somar(double num1, double num2) {
        double resultadosoma;  // 
        resultadosoma = num1 + num2;
        return resultadosoma;  // Retorna o valor da soma
    }

int main() {
    // Mensagem de boas-vindas
    printf("-------------- Bem-Vindo Ao Somador --------------\n");
    Sleep(3000);  // Aguarda 3 segundos
    system("cls");  // Limpa a tela

    // Declarando as variáveis
    int tamanho = 100;
    double numeros[100], num1 = 0, num2 = 0, resultadosoma;
    int i = 0;

    // Loop para inserir os valores
    while (1){
        printf("Digite o numero que deseja somar (digite 0 para parar):\n-> ");
        scanf("%lf", &numeros[i]);

        if (numeros[i] == 0) {
            printf("O numero 0 foi inserido. Finalizando a soma.\n");
            break;  //
        }

        // Realiza a soma acumulada
        if (i == 0) {
            num1 = numeros[i];
        } else {
            num2 = numeros[i];
            resultadosoma = somar(num1, num2);
            printf("A soma de %.2lf e %.2lf e = %.2lf\n", num1, num2, resultadosoma);
            num1 = resultadosoma;
        }

        i++;  // Aumenta o índice para o próximo número

        // Limite de números
        if (i >= tamanho) {
            printf("Limite de numeros somados atingido!\n");
            break;  // Encerra o loop se o limite for atingido
        }
    }

    return 0;
}