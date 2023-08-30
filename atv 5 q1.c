//atv 5 q1
#include <stdio.h>
#include <stdlib.h>
int main(){
    int aprov=0;
    
    float a,b,c,d,e;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    scanf("%f",&e);
    if (a>=7){
        aprov=aprov+1;
    }
    if (b>=7){
        aprov=aprov+1;
    }
    if (c>=7){
        aprov=aprov+1;
    }
    if (d>=7){
        aprov=aprov+1;
    }
    if (e>=7){
        aprov=aprov+1;
    }
    printf("%d foram aprovados",aprov);
    system("pause");
}