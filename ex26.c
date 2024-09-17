#include<stdio.h>
int main () {
    int numero, digito1, digito2, digito3, digito4, digito5, numeroInvertido;
    scanf("%d",&numero);
    if(numero < 0){
        numero = numero * -1;
    }
    if(numero > 99999){
        printf("NUMERO INVALIDO\n");
        return 0;
    }
        if(numero > 9999){
            digito1 = numero / 10000;
            digito2 = numero % 10000 / 1000;
            digito3 = numero % 10000 % 1000 / 100;
            digito4 = numero % 10000 % 1000 % 100 / 10;
            digito5 = numero % 10000 % 1000 % 100 % 10;
            numeroInvertido = digito5 * 10000 + digito4 * 1000 + digito3 * 100 + digito2 * 10 + digito1;
            if(numeroInvertido == numero){
                printf("PALINDROMO\n");
            }else{
                printf("NAO PALINDROMO\n");
            }
        }else if(numero > 999){
            digito1 = numero / 1000;
            digito2 = numero % 1000 / 100;
            digito3 = numero % 1000 % 100 / 10;
            digito4 = numero % 1000 % 100 % 10;
            numeroInvertido = digito4 * 1000 + digito3 * 100 + digito2 * 10 + digito1;
            if(numeroInvertido == numero){
                printf("PALINDROMO\n");
            }else{
                printf("NAO PALINDROMO\n");
            }
        }else if( numero > 99){
            digito1 = numero / 100;
            digito2 = numero % 100 / 10;
            digito3 = numero % 100 % 10;
            numeroInvertido = digito3 * 100 + digito2 * 10 + digito1;
            if(numeroInvertido == numero){
                printf("PALINDROMO\n");
            }else{
                printf("NAO PALINDROMO\n");
            }
        }else if(numero > 9){
            digito1 = 100 / 10;
            digito2 = 100 % 10;
            numeroInvertido = digito2 * 10 + digito1;
            if(numeroInvertido == numero){
                printf("PALINDROMO\n");
            }else{
                printf("NAO PALINDROMO\n");
            }
        }else{
            printf("PALINDROMO\n");
        }
    
    return 0;
}