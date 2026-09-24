#include <stdio.h>
#include <stdlib.h>

int main() {

    int num1, num2, soma;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    // soma dos dois numeros
    soma = num1 + num2;

    printf("A soma entre %d e %d eh %d\n", num1, num2, soma);

    return 0;
}
