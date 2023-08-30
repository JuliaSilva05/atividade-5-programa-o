//atv 5 q3
#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("Digite um número inteiro:\n");
    int numero;
    scanf("%d",&numero);
    printf(" Divisores de %d: ", numero);    
    
    for(int i = 1; i <= numero; ++i){
        if (numero % i == 0) {
            printf(" %d ", i);
    }
    }
}