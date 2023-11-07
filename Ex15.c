#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

    int main(){

        setlocale(LC_ALL, "portuguese");

        int opcao = 1;
        float conversaoParaQui�metros;
        float conversaoParaMilhas;
        float conversaoParaCelsius;
        float conversaoParaFahrenheit;
        float celsius;
        float fahrenheit;
        float quilometros;
        float milhas;


        do
        {
            printf("\nTABELA DE CONVERS�ES\n");
            printf("\n( 1 ) - Quil�metros(Km) --> Milhas(Mi)");
            printf("\n( 2 ) - Milhas(Mi) --> Quil�metros(Km)");
            printf("\n( 3 ) - Celsius(�C) --> Fahrenheit(�F)");
            printf("\n( 4 ) - Fahrenheit(�F) --> Celsius(�C)");

            printf("Digite a op��o desejada: ");
            scanf("%d", &opcao);

            switch (opcao)
        {
        case 1:
            
            printf("\nDigite a dist�ncia em Quil�metros(Km): ");
            scanf("%f", &quilometros);
            conversaoParaMilhas = quilometros / 1.609;
            printf("Convers�o para Milhas(Mi): %.1f ", conversaoParaMilhas);

            break;

        case 2:
            printf("\nDigite a dist�ncia em Milhas(Mi): ");
            scanf("%f", &milhas);
            conversaoParaQui�metros = milhas * 1.609;
            printf("Convers�o para Quil�metros(Km): %.1f ", conversaoParaQui�metros);
           
            break;

        case 3:
            printf("\nDigite a temperatura em Celsius(�C): ");
            scanf("%f", celsius);
            conversaoParaCelsius = ((fahrenheit ? 32) � 5/9);
            printf("Convers�o para Fahrenheit (�F): %.1f ", conversaoParaFahrenheit);

           
            break;

        case 4:
            printf("\nDigite a temperatura em Fahrenheit(�F): ");
            scanf("%f", fahrenheit);
            conversaoParaFahrenheit = ((celsius � 9/5) + 32);
            printf("Convers�o para Celsius(�C): %.1f ", conversaoParaCelsius);
            break;
        
        default:
            printf("Op��o inv�lida! Digite novamente!");
            break;
        }

        } while (opcao = 0);
        
        return 0;
    }