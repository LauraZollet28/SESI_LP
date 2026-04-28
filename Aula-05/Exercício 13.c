#include <stdio.h>

int main() {
    int v[10], i, j;
    int cont, maiorCont = 0, moda;

    for(i = 0; i < 10; i++) {
        printf("Digite um número: ");
        scanf("%d", &v[i]);
    }

    for(i = 0; i < 10; i++) {
        cont = 0;
        for(j = 0; j < 10; j++) {
            if(v[i] == v[j]) {
                cont++;
            }
        }

        if(cont > maiorCont) {
            maiorCont = cont;
            moda = v[i];
        }
    }

    printf("Número que mais se repete = %d\n", moda);

    return 0;
}