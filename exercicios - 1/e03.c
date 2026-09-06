/*
    Utilizando operadores relacionais,
    compare se o valor de A é maior que B e
    salve o resultado da comparação em result
*/

#include <stdio.h>

int main() {
    float A = 4 / 7;
    float B = 3 / 5;
    int resultado;

    if(A > B){
        resultado = A;
    }else{
        resultado = B;
    }

    if (resultado == 0) {
        printf("O resultado esta correto, muito bem!!\n");
    } else {
        printf("O resultado esta incorreto, verifique seu codigo!\n");
    }

    return 0;
}