#include<stdio.h>
int main () {
    int v1,v2,v3, maiorValor, menorValor, valorIntermediario, a, b, c;
    char x, y, z;
    scanf("%d%d%d\n", &v1 ,&v2 ,&v3);
    scanf("%c %c %c", &x, &y, &z);
    if(v1 >= v2){
        if(v1 >= v3){
            if(v2 > v3){
                maiorValor = v1;
                valorIntermediario = v2;
                menorValor = v3;
            }else{
                maiorValor = v1;
                valorIntermediario = v3;
                menorValor = v2;
            }
        }
    }if(v2 >= v1){
        if(v2 >= v3){
            if(v1 >= v3){
                maiorValor = v2;
                valorIntermediario = v1;
                menorValor = v3;
            }else{
                maiorValor = v2;
                valorIntermediario = v3;
                menorValor = v1;
            }
        }
    }if(v3 >= v2){
        if(v3 >= v1){
            if(v2 >= v1){
                maiorValor = v3;
                valorIntermediario = v2;
                menorValor = v1;
            }else{
                maiorValor = v3;
                valorIntermediario = v1;
                menorValor = v2;
            }
        }
    }
    switch(x){
        case 'A':
            a = menorValor;
        break;
        case 'B':
            a = valorIntermediario;
        break;
        case 'C':
            a = maiorValor;
        break;
    }
    switch(y){
        case 'A':
            b = menorValor;
        break;
        case 'B':
            b = valorIntermediario;
        break;
        case 'C':
            b = maiorValor;
        break;
    }
    switch(z){
        case 'A':
            c = menorValor;
        break;
        case 'B':
            c = valorIntermediario;
        break;
        case 'C':
            c = maiorValor;
        break;
    }
    printf("%d %d %d\n", a ,b ,c);
    
    return 0;
}