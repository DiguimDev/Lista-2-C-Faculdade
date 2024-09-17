#include<stdio.h>
int main () {
    int n, n1, i,recepcao, contagem = 0,contagemMax,j;
    scanf("%d",&recepcao);
    n1 =0;
    contagemMax = 0;
    for(i = 0; i < recepcao; i++){
    scanf("%d",&n);
        if(n > n1){
            contagem++;
        }
        if(n <= n1){
            contagem = 1;
        }
        if(contagem > contagemMax){
            contagemMax = contagem;
        }
        n1 = n;
    }
    printf("O comprimento do segmento crescente maximo e: %d\n", contagemMax);

    return 0;
}