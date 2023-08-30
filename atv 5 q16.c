//atv 5 q16
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i = 0;
    int num;
    int aprov = 0;
    while (i<5){
        scanf("%d",&num);
        i++;
        if (num>=7){
            
            aprov++;
            }
    }
    printf("Aprovados: %d \n",aprov);    
}