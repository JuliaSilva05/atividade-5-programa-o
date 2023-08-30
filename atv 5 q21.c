//atv 5 q21
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    printf("Digite um número inteiro:\n");
    int numero=1;
    int alg1,div1,alg2,div2,alg3,div3,alg4,div4;
    
    int nums,resultado;
    
    while (numero!=0){
        scanf("%d",&numero);
        alg1=numero%10;
        div1=numero/10;
        alg2=div1%10;
        div2=div1/10;
        alg3=div2%10;
        div3=div2/10;
        alg4=div3%10;
        div4=div3/10;
        if (alg4!=0){
            nums++;
        }
    }
    
    resultado = nums;
    printf("Possuem mais que 3 digitos: %d",resultado);
}