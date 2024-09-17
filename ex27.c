#include<stdio.h>
#include<math.h>
int main () {
    int numero, numeroCalculado = 0, i, k, numeroSalvo;
    scanf("%d",&numero);
    printf("%d = ", numero);
    for(i = 1; i <= (numero/2)+1; i++){        
        if(numero % i == 0 || i == 1){
           if(i > 1 && i <= numero/2){
                printf(" + ");
            }
            printf("%d", i);
            numeroCalculado += i;
        }
    if(i > numero/2){
        if(numeroCalculado == numero){
        printf(" = %d (NUMERO PERFEITO)\n",numeroCalculado);
    }else{
        printf(" = %d (NUMERO NAO E PERFEITO)\n",numeroCalculado);
    }
    }
    }
    
    return 0;
}