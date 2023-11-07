#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

    int main(){

        setlocale(LC_ALL, "portuguese");

        int opcao = 1;
        float conversaoParaQuiômetros;
        float conversaoParaMilhas;
        float conversaoParaCelsius;
        float conversaoParaFahrenheit;
        float celsius;
        float fahrenheit;
        float quilometros;
        float milhas;


        do
        {
            printf("\nTABELA DE CONVERSÕES\n");
            printf("\n( 1 ) - Quilômetros(Km) --> Milhas(Mi)");
            printf("\n( 2 ) - Milhas(Mi) --> Quilômetros(Km)");
            printf("\n( 3 ) - Celsius(°C) --> Fahrenheit(°F)");
            printf("\n( 4 ) - Fahrenheit(°F) --> Celsius(°C)");

            printf("Digite a opção desejada: ");
            scanf("%d", &opcao);

            switch (opcao)
        {
        case 1:
            
            printf("\nDigite a distância em Quilômetros(Km): ");
            scanf("%f", &quilometros);
            conversaoParaMilhas = quilometros / 1.609;
            printf("Conversão para Milhas(Mi): %.1f ", conversaoParaMilhas);

            break;

        case 2:
            printf("\nDigite a distância em Milhas(Mi): ");
            scanf("%f", &milhas);
            conversaoParaQuiômetros = milhas * 1.609;
            printf("Conversão para Quilômetros(Km): %.1f ", conversaoParaQuiômetros);
           
            break;

        case 3:
            printf("\nDigite a temperatura em Celsius(°C): ");
            scanf("%f", celsius);
            conversaoParaCelsius = ((fahrenheit ? 32) × 5/9);
            printf("Conversão para Fahrenheit (°F): %.1f ", conversaoParaFahrenheit);

           
            break;

        case 4:
            printf("\nDigite a temperatura em Fahrenheit(°F): ");
            scanf("%f", fahrenheit);
            conversaoParaFahrenheit = ((celsius × 9/5) + 32);
            printf("Conversão para Celsius(°C): %.1f ", conversaoParaCelsius);
            break;
        
        default:
            printf("Opção inválida! Digite novamente!");
            break;
        }

        } while (opcao = 0);
        
        return 0;
    }