#include <stdio.h>

int main() {
    float salario, bonus, salarioFinal;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    if (salario > 3000) {
        bonus = salario * 0.05;
    } else {
        bonus = salario * 0.10;
    }

    salarioFinal = salario + bonus;

    printf("Salario final: %.2f\n", salarioFinal);

    return 0;
}