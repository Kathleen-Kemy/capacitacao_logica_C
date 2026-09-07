/*
    A expressão A != B inverte o valor binário de b e salva em a.
    Inicialize a variável B com um valor de modo que A resulte em 1.
    Execute o programa para testar.
*/

#include <stdio.h>

int main() {
    int a = 10;
    int b = 1;

    a = (a != b); //aq a vira a resposta para a pergunta: "a é diferente de b?", se for, é 1 :D

    if (a == 1) printf("O valor de a eh 1, muito bem!\n");
    else printf("O valor de a eh %d, verifique seu codigo!\n", a);

    return 0;
}