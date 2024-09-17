#include<stdio.h>
int main () {
    int numero, repeticoes, i;
    scanf("%d%d", &numero,&repeticoes);
    if(numero % 2 == 0){
        for(i=0 ;i< repeticoes; i++){
            
            if(i == repeticoes -1){
            printf("%d \n", numero);
            break;
        }
            printf("%d ", numero);
            numero += 2;
        
        }
    }else{
        printf(" O PRIMEIRO NUMERO NAO E PAR\n");
    }


    return 0;
}