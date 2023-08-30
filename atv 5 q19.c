//atv 5 q 19
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 0;
    
    int n = 1;
    int m = 0;
    int media = 0;
    int div2,div3,div5,div2_vdd,div3_vdd,div5_vdd;
    printf("Digite numeros\n");
    while (n!=0){
        
        scanf("%d",&n);
        m=m+n;
        i++;
        if (n%2==0){
            div2 = div2 + 1;
        } 
        if (n%3==0){
            div3 = div3 + 1;
        }
        if (n%5==0){
            div5 = div5 + 1;
        }
        
    }
    div2_vdd=div2 - 1;
    div3_vdd=div3 - 1;
    div5_vdd=div5 - 1;
    printf("Divisiveis por 2: %d\n",div2_vdd);
    printf("Divisiveis por 3: %d\n",div3_vdd);
    printf("Divisiveis por 5: %d\n",div5_vdd);
    return 0;
}
