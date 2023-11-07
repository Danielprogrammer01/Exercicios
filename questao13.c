#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(void){
    setlocale(LC_ALL, "portuguese");

    int numeroUm;
    int numeroDois;
    int maior;
    int menor;

    printf("Lance um número : ");
    scanf("%d", &numeroUm);

    printf("Digite um número: ");
    scanf("%d", &numeroDois);

    maior = numeroUm > numeroDois ? numeroUm : numeroDois;
    menor = numeroUm < numeroDois ? numeroUm : numeroDois;

    printf("O maior número é %d", maior);
    printf("O menor número é %d", menor);
}