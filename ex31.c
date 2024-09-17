#include<stdio.h>
int main(){
    int quantidade, primeiroNumero, segundoNumero,i ,fibo ,contador = 0;
    scanf("%d%d%d",&quantidade, &primeiroNumero, &segundoNumero);
    for(i = 0; i < quantidade; i++){
        scanf("%d",&fibo);
        if(i == 0 && primeiroNumero != fibo){
            contador++;
            break;
        } 
        if(i == 1 && segundoNumero != fibo){
            contador++;
            break;
        }
        if(i > 1 && fibo != primeiroNumero + segundoNumero){
            contador++;
            break;
        }
    printf("OK\n");
    if(i > 1){
    primeiroNumero = segundoNumero;
    segundoNumero = fibo;
    }
    }

    if(contador == 0){
        printf("A serie informada e de Fibonacci\n");
    }else{
            printf("Nao e Fibonacci\n");
    }
    return 0;
}