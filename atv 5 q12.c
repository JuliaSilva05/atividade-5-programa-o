//atv 5 q12
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
    while (soma!=-1){
        
        scanf("%d",&soma);
        resultado=resultado+soma;
        i++;
        
    }
    media = resultado/(i-1);
    printf("media: %f",media);
    return 0;
}
