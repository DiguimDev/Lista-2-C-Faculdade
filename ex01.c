#include<stdio.h>
int main () {
    double nota1, nota2, nota3 ,resultado;
    scanf("%lf%lf%lf", &nota1, &nota2, &nota3);

    resultado = (nota1 + nota2 + nota3)/3;

    if(resultado >= 6.0){
        printf("MEDIA = %.2lf\n", resultado);
        printf("APROVADO\n");
    }else{
        printf("MEDIA = %.2lf\n", resultado);
        printf("REPROVADO\n");
    }
    return 0;
}