#include<stdio.h>
int main () {
    int n, n2;
    scanf("%d",&n);
    n2 = (n*32) + (2*n*32) -n;
    printf("%d\n", n2);
    return 0;
}