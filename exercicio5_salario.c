#include <stdio.h>
#include <stdlib.h>

int main() {

    float salario, bonus, salarioFinal;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    printf("Digite o valor do bonus: ");
    scanf("%f", &bonus);

    // salario final = salario + bonus
    salarioFinal = salario + bonus;

    printf("O salario final do funcionario eh %.2f\n", salarioFinal);

    return 0;
}
