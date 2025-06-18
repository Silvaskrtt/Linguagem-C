#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

// FUNÇÃO SOMA
float soma(float num1, float num2){
    float resultadosoma;
    resultadosoma = num1 + num2;
    return(resultadosoma);
}

// FUNÇÃO SUBTRAÇÃO
float subtracao(float num1, float num2){
    float resultadosub;
    resultadosub = num1 - num2;
    return(resultadosub);
}

// FUNÇÃO MULTIPLICACAO
float multiplicacao(float num1, float num2){
    float resultadomult;
    resultadomult = num1 * num2;
    return(resultadomult);
}

// FUNÇÃO DIVISÃO
float divisao(float num1, float num2){
    float resultadodiv;
    resultadodiv = num1 / num2;
    return(resultadodiv);
}

// FUNÇÃO RESTO
int restodiv(int num1, int num2){
    int resultadresto;
    resultadresto = num1 % num2;
    return(resultadresto);
}

// FUNÇÃO POTÊNCIA
double potencia(double base , double expoente){
    return pow(base, expoente);
}

// FUNÇÃO RAIZ QUADRADA
double raizq(double valor){
    return sqrt(valor);
}

int main() {
    printf(" --------- Bem-Vindo a sua Calculadora! ---------\n");
    Sleep(3000);
    system("cls");

    // VARIÁVEIS ORIGINAIS (ainda necessárias para resto)
    float num1 = 0, num2 = 0;
    float resultadosub, resultadosoma, resultadomult, resultadodiv;
    char operadornum;
    int resultadresto;

    // VERIFICANDO OPERADOR
    int operador_valido = 0;
    while(operador_valido == 0){
        printf("\n------------------------------------------------------\nEscolha qual operacao deseja prosseguir!\nDigite (+ | - | / | %% | * | P | R) para selecionar o operador:\n------------------------------------------------------\n");
        printf("Digite o operador: ");
        scanf(" %c", &operadornum);

        if(operadornum == '+' || operadornum == '-'|| operadornum == '*' || operadornum == '/' || operadornum == '%' || operadornum == 'P' || operadornum == 'R'){
            operador_valido = 1;
        }else{
            printf("O operador '%c' e invalido. Tente novamente!", operadornum);
            Sleep(3000);
            system("cls");
        }
    }

    // LOOP DE ENTRADA
    int tamanho = 100;
    double numeros[100];
    char operadores[100];
    int i = 0;

    while(1){
        printf("Digite um numero: ");
        scanf(" %lf", &numeros[i]);

        printf("Digite um operador (+, -, *, /, %%, P, R ou = para finalizar): ");
        scanf(" %c", &operadores[i]);

        if(operadores[i] == '='){
            break;
        }

        i++;

        if(i >= tamanho - 1){
            printf("Limite de entradas atingidos\n");
            break;
        }
    }

    double resultado = numeros[0];

    for (int j = 0; j < i; j++){
        switch (operadores[j]){
            case '+':
                resultado += numeros[j+1];
                break;
            case '-':
                resultado -= numeros[j+1];
                break;
            case '*':
                resultado *= numeros[j+1];
                break;
            case '/':
                if(numeros[j+1] == 0){
                    printf("Erro: divisao por zero!\n");
                    return 1;
                }
                resultado /= numeros[j+1];
                break;
            case '%':
                num1 = resultado;
                num2 = numeros[j+1];
                resultadresto = restodiv((int)num1, (int)num2);
                resultado = resultadresto;
                break;
            case 'P':
                resultado = potencia(resultado, numeros[j+1]);
                break;
            case 'R':
                resultado = raizq(resultado);
                break;
        }
    }

    printf("Resultado final: %.2lf\n", resultado);
    return 0;
}