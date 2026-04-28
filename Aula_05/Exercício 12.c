#include <stdio.h>

int main() {
    int v[6], i;
    int maior, segundo;

    for(i = 0; i < 6; i++) {
        printf("Digite um número: ");
        scanf("%d", &v[i]);
    }

    // Inicialização
    if(v[0] > v[1]) {
        maior = v[0];
        segundo = v[1];
    } else {
        maior = v[1];
        segundo = v[0];
    }

    for(i = 2; i < 6; i++) {
        if(v[i] > maior) {
            segundo = maior;
            maior = v[i];
        } else if(v[i] > segundo && v[i] != maior) {
            segundo = v[i];
        }
    }

    printf("Segundo maior = %d\n", segundo);

    return 0;
}