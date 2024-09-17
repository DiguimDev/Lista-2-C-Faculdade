#include<stdio.h>
#include<math.h>
int main () {
    int numero, i, j, k;
    scanf("%d",&numero);
    for(k = 0; k <= numero; k++){
        for(i = numero; i > 1; i--){
            for(j = 2; j <= i; j++){
                if(k*k == (i*i) + (j*j)){
                    printf("hipotenusa = %d, catetos %d e %d\n", k, j, i);
                }
            }
        }
    }
    return 0;
}