#include<stdio.h>
#include<math.h>
int main () {
    int i, j, k, contagem, ultimaSaida = 1;
    scanf("%d", &j);
    for(i = 1; i <= j; i++){
        printf("%d*%d*%d = ",i ,i ,i);
            for(k = ultimaSaida;; k+= 2){
                contagem++;
                if(contagem > 1){printf("+");}
                printf("%d",k);
                if(contagem == i){
                    ultimaSaida = k + 2;
                    contagem = 0; 
                    printf("\n");
                    break;
                }
            }
    }
        
    return 0;
}