#include<stdio.h>
int main () {
    int n, i;
    long int resultado;
    scanf("%d",&n);
    resultado = 1;
    for(i = n; i > 0; i--){
        resultado *= i;
    }
    printf("%d! = %li\n",n ,resultado);

    return 0;
}