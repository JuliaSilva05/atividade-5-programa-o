//atv 5 q22
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 0;
    int soma = 1;
    int n;
    int resultado = 0;
    float media = 0;
    printf("Digite numeros\n");
    while (soma!=0){
        
        scanf("%d",&soma);
        
        if (50<soma && soma<100){
            resultado=resultado+soma;
            i++;
        }
        
    }
    media = resultado/i;
    printf("media doss numeros entre 50 e 100: %f",media);
    return 0;
}