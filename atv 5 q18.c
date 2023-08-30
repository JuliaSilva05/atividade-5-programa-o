//atv 5 q18
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 0;
    int soma = 1;
    int n;
    int resultado = 0;
    int media = 0;
    int pares,impares,paresvdd,imparesvdd;
    printf("Digite numeros\n");
    while (soma!=0){
        
        scanf("%d",&soma);
        resultado=resultado+soma;
        i++;
        if (soma%2==0){
            pares = pares + 1;
        } else{
            impares = impares + 1;
        }
        
    }
    paresvdd=pares - 1;
    printf("Pares: %d\n",paresvdd);
    printf("Impares: %d\n",impares);
    return 0;
}
