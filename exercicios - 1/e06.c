/*
    Crie um código com 3 variáveis de tipo float chamadas A, B e C.
    Atribua valores com 2 casas decimais para A e B.
    Multiple A por B e salve o resultado em C.

    Execute o programa. O valor de C será exibido para checagem.
    Multiplique os valores em uma calculadora e verifique se o valor de C está correto.

    Obs.: os valores devem ser atribuidos com . (ponto) e não com , (vírgula). Ex.: 1.618
*/
#include <stdio.h>

int main(){
    float A = 2.71, B = 7.98, C = 0;

    C = A * B;

    // validação
    printf("Valor de C: %f", C);
    return 0;
}
