/*
    O programa abaixo faz a leitura de 5 inteiros e os armazena em um vetor.
    Em seguida, imprime os dados contidos no vetor e soma todos.
    Os comentário foram usados apenas para explicar o que cada parte do código faz.
    Execute esse programa, teste, depois modifique-o para que leia 10 inteiros.
    A funcionalidade deve permanecer a mesma.
    Teste seu programa.
*/


#include <stdio.h>
#define qnt 10

int main()
{
    int v[qnt];
    int soma = 0, i;

    printf("Por favor, digite %d inteiros:\n", qnt);
    for (i = 0; i < qnt; i++)
    {
        printf("Valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nSeus numeros sao:\n");
    for (i = 0; i < qnt; i++)
    {
        printf("v[%d] = %d\n", i, v[i]);
    }

    for (i = 0; i < qnt; i++)
    {
        soma += v[i];
    }

    printf("A soma dos numeros: %d\n", soma);

    return 0;
}