
#include <stdio.h>
    int main(){
        int n1, n2;
        
        printf("Digite o primeiro número: ");
        scanf("%i", &n1);
        
        printf("Digite o segundo número: ");
        scanf("%i", &n2);
        
        if (n1 == n2){
            printf("Os números digitados são iguais");
        }else if(n1 > n2){
            printf("%i e o maior número", n1);
        }else{
            printf("%I e o maior número", n2);
        }
        
        
        return 0;
    }