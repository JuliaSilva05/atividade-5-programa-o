//atv 5 q13
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    printf("Digite um número inteiro:\n");
    int numero;
    int alg1,div1,alg2,div2,alg3,div3,alg4,div4;
    scanf("%d",&numero);
    alg1=numero%10;
    div1=numero/10;
    alg2=div1%10;
    div2=div1/10;
    alg3=div2%10;
    div3=div2/10;
    alg4=div3%10;
    div4=div3/10;
    
    int soma=pow(alg1,3)+pow(alg2,3)+pow(alg3,3)+pow(alg4,3);
    printf("Soma dos dígitos: %d",soma);
}