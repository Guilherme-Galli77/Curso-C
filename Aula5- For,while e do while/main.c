#include <stdio.h>
#include <stdlib.h>
//Estruturas de repeti��o for,while e do while

/*
Utilizando o For (para)

Fa�a um programa, no qual receba e soma os 5 n�meros
inteiros e apresente a soma no final;
*/
int main(){
    //Variaveis
    int numero, soma = 0;
    //For
    for(int i = 0; i < 5; i++){
    //Entrada
    printf("Informe um numero: ");
    scanf("%d", &numero);

    //Processamento
    soma = soma + numero;
}
    //Saida
    printf("A soma � %d ", soma);

    return 0;
}
