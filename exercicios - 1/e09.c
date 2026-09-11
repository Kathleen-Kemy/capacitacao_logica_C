/*
    Crie um IF/ELSE para checar se a variável digitada pelo usuário é positiva ou negativa.
    Caso seja positiva, exiba uma mensagem informando que o número é positivo.
    Caso seja negativa, exiba uma mensagem informando que o número é negativo.
    Para exibir as mensagens, utilize a função printf().
    Execute o código para testar.
*/
#include <stdio.h>

int main()
{
    
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num > 0)
    {
        printf("O numero digitado eh positivo.\n");
    }
    else if (num < 0)
    {
        printf("O numero digitado eh negativo.\n");
    }
    else
    {
        printf ("O numero zero eh nulo!\n");
    }

    return 0;
}