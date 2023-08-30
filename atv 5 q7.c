//atv 5 q7
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
    
    printf("Numero invertido: ");
    if (alg4==0&&alg3==0&&alg2==0){
        printf("%d",alg1);
    } else if (alg4==0&&alg3==0){
        printf("%d%d",alg1,alg2);
    } else if (alg4==0){
        printf("%d%d%d",alg1,alg2,alg3);
    } else{
        printf("%d%d%d%d",alg1,alg2,alg3,alg4);
    }
    
}