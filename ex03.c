#include<stdio.h>
int main () {
    double consumo, valorDaConta;
    int conta;
    char consumidor;
    scanf("%d%lf %c",&conta,&consumo,&consumidor);

    switch(consumidor){
        case 'R':
        valorDaConta = 5 + (0.05 * consumo);
        break;
        case 'C':
        if(consumo <= 80){
            valorDaConta = 500;
        }else{
            valorDaConta = 500 + ((consumo - 80) * 0.25);
        } break;
        case 'I':
         if(consumo <= 100){
            valorDaConta = 800;
        }else{
            valorDaConta = 800 + ((consumo - 100) * 0.04);
        } break;
        
    }
    printf("CONTA = %d\n",conta);
    printf("VALOR DA CONTA = %.2lf\n",valorDaConta);

    return 0;
}