//atv 5 q20
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
        
        if (soma%3==0){
            resultado=resultado+soma;
            i++;
        }
        
    }
    media = resultado/(i-1);
    printf("media dos divisiveis por 3: %f",media);
    return 0;
}