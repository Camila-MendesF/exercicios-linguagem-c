#include <stdio.h>
#include <stdlib.h>

int main() {

    float base, altura, area;

    printf("Digite a base do retangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);

    // area = base * altura
    area = base * altura;

    printf("A area do retangulo eh %.2f\n", area);

    return 0;
}
