/*
    O seguinte programa calcula a área de um triângulo.
    Complete-o para que ele funcione corretamente e imprima o resultado com uma casa decimal.
    Ao final, crie um IF/ELSE para verificar se a área é maior que 30:
    caso sim - exiba "Triangulo grande", 
    caso contrário - exiba "Triangulo pequeno".
*/

#include <stdio.h>

int main()
{
    float base, altura, area;

    printf("Digite a base e a altura do triagulo: ");
    scanf("%f %f", &base, &altura);

    area = (base * altura)/2;

    printf("Area do triangulo: %.1f\n", area);

    (area > 30) ? printf("Eh um triangulo graande.\n") : printf("Eh um triangulo pequenino.\n");

    return 0;
}