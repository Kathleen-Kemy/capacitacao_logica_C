/*
    DESAFIO

    O código abaixo recebe um número digitado pelo usuário e guarda seu valor na variável D. 
    Em seguida, verifica se o número é par ou ímpar e imprime uma mensagem informativa.
    
    Porém, no lugar da condição de verificação, há um "???",

    Determine quais os comparadores necessários para verificar se número é par ou ímpar, 
    substituindo o "???" pela expressão comparativa que completa o código abaixo corretamente.

    Teste seu programa executando-o e digitando valores diferentes.
*/

#include <stdio.h>

int main()
{
    int D;

    printf("Oii! Digite um numero inteiro: ");
    scanf("%d", &D);

    if (D % 2 == 0) {
        printf("O numero %d eh PAR.\n", D);
    } else {
        printf("O numero %d eh IMPAR.\n", D);
    }

    return 0;
}