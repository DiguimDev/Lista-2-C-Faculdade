#include<stdio.h>
int main () {
    double v, i, menorValor = 0, subMenorValor = 0, valorIntermediario = 0, maiorValor = 0;
    for(i = 0;i < 4; i++){
        scanf("%lf", &v);
        if(v >= maiorValor){
            menorValor = subMenorValor;
            subMenorValor = valorIntermediario;
            valorIntermediario = maiorValor;
            maiorValor = v;
        }else if(v >= valorIntermediario){
            menorValor = subMenorValor;
            subMenorValor = valorIntermediario;
            valorIntermediario = v;
        }else if(v >= subMenorValor){
            menorValor = subMenorValor;
            subMenorValor = v;
        }else {
            menorValor = v;
        }
    }
    printf("%.2lf, %.2lf, %.2lf, %.2lf", menorValor, subMenorValor, valorIntermediario, maiorValor);
    return 0;
}