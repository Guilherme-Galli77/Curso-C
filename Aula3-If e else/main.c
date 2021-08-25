//Estruturas de decisão if,else, else if
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarando variaveis
    int idade;

    //Função para escrever no console
    printf("Qual eh a sua idade? \n");

    //Receber dados
    scanf("%d", &idade);

    printf("A sua idade eh %d \n", idade);

    if(idade < 18){
        printf("Voce eh menor de idade! ");
    }else if(idade > 18 && idade < 60){
        printf("Voce eh adulto");
    }else{
        printf("Voce eh idoso");
    }

    return 0;
}
