//atv 5 q5
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i = 0;
    while (i<100){
        i++;
        if (i%3!=0&&i%5!=0){
            printf("%d \n",i);
        }
        if (i%15==0){
            printf("FizzBuzz\n");
        } else if (i%3==0){
            printf("Fizz \n");
        } else if  (i%5==0){
            printf("Buzz \n");
        }
        
    }
}