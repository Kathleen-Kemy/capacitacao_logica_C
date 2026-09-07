/*
    Utilizando operadores relacionais,
    compare se o valor de A é maior que B e
    salve o resultado da comparação em result
*/

#include <stdio.h>
#include <string.h>

int main()
{
    float A = 7/7;
    float B = 5/5;
    char resultado[100];

    if(A > B)
    {
        strcpy(resultado, "A eh maior que B");
    }
    else if(B > A)
    {
        strcpy(resultado, "B eh maior que A");
    }
    else
    {
        strcpy (resultado, "Os dois sao iguaiss :)");
    }

    printf ("%s", resultado);

    return 0;
}