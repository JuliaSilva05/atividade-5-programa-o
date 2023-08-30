//atv 5 q4
#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("Digite 5 alturas:\n");
    float a,b,c,d,e,media;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    scanf("%f",&e);
    media = (a+b+c+d+e)/5;
    
    printf("A média das alturas é %f",media);
    
}