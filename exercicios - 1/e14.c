/*
    O programa abaixo lê uma temperatura em Fahrenheit informada pelo usuário.
    Pesquise a fórmula de conversão de Fahrenheit para Celsius e complete o código.
*/

#include <stdio.h>

int main()
{
    float fah, cel;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fah);

    cel = (fah - 32) * 5 / 9;

    printf("Temperatura em Celsius: %.2f C\n", cel);

    return 0;
}
