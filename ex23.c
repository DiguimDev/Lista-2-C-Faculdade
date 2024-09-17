#include<stdio.h>

#include<math.h>

int main () {
    unsigned long int codigo, maisVendido, maiorLucro, lucroMenor, lucro10 ,lucro20, i;
    float compraMercadoria , vendaMercadoria, lucroSalvoPorcentagem = 0, vendaSalva = 0;
    double valorTotalCompras, valorTotalVendas;
    double lucro, lucroTotal;
    int numeroVendas;
    lucro10 = 0;
    valorTotalVendas = 0;
    i= 0;
        while( (scanf("%lu %f %f %d", &codigo, &compraMercadoria, &vendaMercadoria, &numeroVendas)) != EOF) {  
            lucro = 0;
            lucro = ((vendaMercadoria - compraMercadoria )/compraMercadoria)*100;
            if(lucro < 10.0){
                lucroMenor++;
            }else if(lucro >= 10 && lucro <= 20){
                lucro10+= 1;
            }else{
                lucro20++;
            }
            if(lucroSalvoPorcentagem < lucro){
                lucroSalvoPorcentagem = lucro;
                maiorLucro = codigo;
            }
            if(vendaSalva < numeroVendas){
                maisVendido = codigo;
                vendaSalva = numeroVendas;
            }

            valorTotalCompras += compraMercadoria * numeroVendas;
            valorTotalVendas += vendaMercadoria * numeroVendas;
              
        }   
            lucroTotal = ((valorTotalVendas - valorTotalCompras)/valorTotalCompras)*100;   
            printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n",lucroMenor);
            printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n", lucro10);
            printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %d\n", lucro20);
            printf("Codigo da mercadoria que gerou maior lucro: %d\n", maiorLucro);
            printf("Codigo da mercadoria mais vendida: %d\n", maisVendido);
            printf("Valor total de compras: %.2lf, valor total de vendas: %.2lf e percentual de lucro total: %.2lf%%\n", valorTotalCompras, valorTotalVendas, lucroTotal);       
    return 0;
}