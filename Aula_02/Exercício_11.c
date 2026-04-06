#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if (num2 == 0) {
        printf("Nao e possivel verificar (divisao por zero).\n");
    } else if (num1 % num2 == 0) {
        printf("O primeiro numero e multiplo do segundo.\n");
    } else {
        printf("O primeiro numero nao e multiplo do segundo.\n");
    }

    return 0;
}