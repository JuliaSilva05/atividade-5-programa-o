//atv 5 q6
#include <stdio.h>
#include <stdlib.h>
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
    
    int soma=0;
    if (alg1%2==0){
        soma = soma + alg1;
    }
    if (alg2%2==00){
        soma = soma + alg2;
    }
    if (alg3%2==00){
        soma = soma + alg3;
    }
    if (alg4%2==00){
        soma = soma + alg4;
    }

    printf("Soma dos dígitos: %d",soma);
}