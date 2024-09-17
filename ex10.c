#include<stdio.h>
int main () {
    int numero, i, j,possibilidades;
    possibilidades = 0;
    i = 0;
    scanf("%d", &numero);
    for(i = 0; i < 7; i++){
        for(j = 0; j < 7; j++){
        if(i + j == numero && i != j && i != 0 && j != 0){
            printf("D1: %d, D2: %d\n",i,j);
            possibilidades++;
        }
        
}
        }
        if(possibilidades == 0){
            printf("Combinacao impossivel\n");
        }else{
            printf("Ha %d possibilidades\n",possibilidades);
        }
        

    return 0;
}