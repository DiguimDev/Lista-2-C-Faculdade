#include<stdio.h>
int main () {
    int matricula,i;
    double mp, ml, nt, freq, numero, notaFinal;
    i = 0;
    while(numero != -1 && matricula != -1){
        if(i == 0){
            scanf("%d",&matricula);
            i++;
        }
        if(matricula == -1) break;
        if(i > 0 && i < 8){
            scanf("%lf", &numero);
            mp += numero;
            i++;
        }
        if(i == 8){
            scanf("%lf", &numero);
            mp += numero;
            mp = mp/8;
            i++;
        }
        if(i > 8 && i < 13){
            scanf("%lf",&numero);
            ml += numero;
            i++;
        }
        if(i == 13){
            scanf("%lf",&numero);
            ml += numero;
            ml = ml/5;
            i++;
        }
        if(i == 14){
            scanf("%lf",&numero);
            nt += numero;
            i++;
        }
        if(i == 15){
            scanf("%lf",&numero);
            freq += numero;
            i++;
        }
        if(i == 16){
            notaFinal = (0.7 * mp) + (0.15 * ml) + (0.15 * nt);
            if(notaFinal >= 6 && freq >= 96){
                printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: APROVADO\n",matricula, notaFinal);
            }else if(notaFinal >= 6 && freq < 96){
                printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR FREQUENCIA\n",matricula, notaFinal);
            }else if(notaFinal < 6 && freq >= 96){
                printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA\n",matricula, notaFinal);
            }else{
                printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n",matricula, notaFinal);
            }
            i = 0;
            mp = 0;
            ml = 0;
            nt = 0;
            notaFinal = 0;
            freq = 0;
        }
        if(numero == -1){
            break;
        }

    }

    return 0;
}