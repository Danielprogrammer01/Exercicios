#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

    int main(){

        setlocale(LC_ALL, "portuguese");

        float PrimeiroNumero;
        float SegundoNumero;
        int operacao;
        float soma;
        float subtracao;
        float multiplicacao;
        float divisao;

        printf("Digite o primeiro n�mero: ");
        scanf("%f", &PrimeiroNumero);

        printf("\nDigite o segundo n�mero: ");
        scanf("%f", &SegundoNumero);


       printf("\n( 1 ) - Soma");
       printf("\n( 2 ) - Subtra��o");
       printf("\n( 3 ) - Multiplica��o");
       printf("\n( 4 ) - Divis�o\n");
       
        do
        {
          
        printf("\nEscolha uma opera��o matem�tica: ");
        scanf("%d", &operacao);

        switch (operacao)
        {
        case 1:
            
        soma = PrimeiroNumero + SegundoNumero;
        printf("\nResultado da soma: %.1f\n", soma);

            break;

        case 2:

        subtracao = PrimeiroNumero - SegundoNumero;
        printf("\nResultado da subtra��o: %.1f\n", subtracao);

            break;

        case 3:

        multiplicacao = PrimeiroNumero * SegundoNumero;
        printf("\nResultado da multiplica��o: %.1f\n", multiplicacao);

            break;

        case 4:

        divisao = PrimeiroNumero / SegundoNumero;
        printf("\nResultado da divis�o: %.1f\n", divisao);

            break;
        
        default:
            printf("\nOpera��o inv�lida!\n");
            break;
        }
    
        
        } while (operacao <= 0 || operacao > 4);


        return 0;
    }