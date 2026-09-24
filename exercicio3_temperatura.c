#include <stdio.h>
#include <stdlib.h>

int main() {

    float celsius, fahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    // formula de conversao: F = (C * 9 / 5) + 32
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
