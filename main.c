#include <stdio.h>

int main(){
    //Declaro as variaveis usadas no programa
    int numero;
    int soma = 0;
    //Boas vindas ao usuario
    printf("***Calculadora de números inteiros***\n\n");
    printf("Digite apenas número inteiros\n");
    printf("Caso queira encerrar o programa digite 0\n\n");
    //começo a estrutura de repetição While
    while(1){
        //faço a solicitação ao usuario
        printf("Digite um número inteiro: ");
        scanf("%d", &numero);
        //verifico se o número digitado é o número sentinela "0" que interrompe o programa.
        if(numero == 0)
        { 
            break;
        }
        //faço a soma
        soma += numero;
    }
    //mostro ao usuario o resultado da soma dos números
    printf("\nPrograma encerrado com sucesso...\nA soma dos números foi de: %d\n", soma);
    return 0;
}