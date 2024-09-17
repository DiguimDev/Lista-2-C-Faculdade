#include<stdio.h>
int main () {
    int t, a, b, i, j, a1, a2, a3, b1, b2, b3;
    scanf("%d",&t);
    for(i = 0; i < t; i++){
        for(j = 0; j < 1; j++){
            scanf("%d%d",&a, &b);
            a1 = a / 100;
            a2 = a % 100 / 10;
            a3 = a % 100 % 10;
            b1 = b / 100;
            b2 = b % 100 / 10;
            b3 = b % 100 % 10;
            a = a3 * 100 + a2 * 10 + a1;
            b = b3 * 100 + b2 * 10 + b1;
            if(a == b || a1 == 0 || a2 == 0 || a3 == 0  || b1 == 0 || b2 == 0 || b3 == 0) {
                break;
            }
            if(a > b){
                printf("%d\n",a);
            }else{
                printf("%d\n",b);
            }
            
            
        }
    }
    return 0;
}