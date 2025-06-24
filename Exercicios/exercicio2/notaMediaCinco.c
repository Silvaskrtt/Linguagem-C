#include <stdio.h>
#include <windows.h>

    float media(float nota[5]){
        float resultadomedia;
        resultadomedia = (nota[0] + nota[1] + nota[2] + nota[3] + nota[4]) / 5.0;
        return(resultadomedia);
    }

int main() {

    // Declarando variaveis
    float resultadomedia, nota[5];
    int nota_valida = 0;

    // Mensagem de boas-vindas
    printf("--- Bem-Vindo ao seu calculador de Media ---\n");
    Sleep(3000);  // Espera 3 segundos
    system("cls");  // Limpa a tela

    // Verificando as notas se as notas sao validas
    while (nota_valida == 0) {
        nota_valida = 1; 
        printf("Por favor, digite as suas 5 notas (nao insira valores negativos)\n");

        for (int pos = 0; pos < 5; pos++) {
            printf("Digite sua %d nota: ", pos + 1);
            scanf("%f", &nota[pos]);

            if (nota[pos] < 0) {
                printf("Nota invalida! As notas nao podem ser negativas.\n");
                nota_valida = 0;
                break;
            }
        }
    }
    //limpa tela
    system("cls");

    // chamando a funçao media
    resultadomedia = media(nota);

    if(resultadomedia >= 7.0){
        printf("Sua media e: %.2f\nVoce esta aprovado!", resultadomedia);
    }else if(resultadomedia >= 6.0){
        printf("Sua media e: %.2f\nVoce esta de recuperacao!", resultadomedia);
    }else{
        printf("Ta reprovado vagabundo!\n%.2f tua media ai!", resultadomedia);
    }

    return 0;
}