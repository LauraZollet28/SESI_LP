#include <stdio.h>

int main() {
    int v[10], i, j, temp;

    for(i = 0; i < 10; i++) {
        printf("Digite um número: ");
        scanf("%d", &v[i]);
    }

    for(i = 0; i < 9; i++) {
        for(j = 0; j < 9 - i; j++) {
            if(v[j] < v[j + 1]) {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }

    printf("Ordem decrescente:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}