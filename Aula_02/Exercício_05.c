#include <stdio.h>

int main() {
    float valor, desconto, valorFinal;
    
    printf("Digite o valor da compra: ");
    scanf("%f", &valor);
    
    if (valor > 100) {
        desconto = valor * 0.10;
    }else {
        desconto =  valor * 0.05;
    }
    
    valorFinal = valor - desconto;
    
    printf("Valor final com desconto: R$ %.2f/n", valorFinal);
    
    return 0;
}