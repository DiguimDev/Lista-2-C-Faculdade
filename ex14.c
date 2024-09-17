#include<stdio.h>
int main(){
    int numero, i, primo;
    scanf("%d", &numero);
    primo = 0;
    if(numero < 0){
        printf("Numero invalido!\n");
        return 0;
    }
    for(i = numero; i > 1; i--){
        if(numero % i == 0 && i != 1 && i != numero && i != 0){
            primo++;
            break;
        }
    }
    if(primo == 0 && numero > 1){
        printf("PRIMO\n");
    }else{ 
        printf("NAO PRIMO\n");
    }
    
    return 0;
}