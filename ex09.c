#include<stdio.h>
int main () {
    int a , b, i;
    scanf("%d%d",&a, &b);
    i = 0;
    while(a < b){
    a += (a*0.03);
    b += (b *0.015);
    i++;
    }
    printf("ANOS = %d\n", i);

    return 0;
}