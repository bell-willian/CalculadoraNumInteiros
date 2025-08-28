#include <stdio.h>

int main(){

    int numero;
    int soma = 0;

    printf("***Calculadora de números inteiros***\n\n");
    printf("Digite apenas número inteiros\n");
    printf("Caso queira encerrar o programa digite 0\n\n");

    while(1){
        printf("Digite um número inteiro: ");
        scanf("%d", &numero);
        if(numero == 0)
        {
            break;
        }
        if(numero < 0){
            printf("Digite um número positivo...\n");
            continue;
        }
        soma += numero;
    }
    printf("\nPrograma encerrado com sucesso...\nA soma dos números foi de: %d\n", soma);
    return 0;
}