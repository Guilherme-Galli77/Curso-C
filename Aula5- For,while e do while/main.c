#include <stdio.h>
#include <stdlib.h>
//Estruturas de repetição for,while e do while

/*
Utilizando o For (para)

Faça um programa, no qual receba e soma os 5 números
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
    printf("A soma é %d ", soma);

    return 0;
}
