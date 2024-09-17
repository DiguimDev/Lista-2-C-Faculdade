#include<stdio.h>
int main () {
    int numeroDeConversao, i;
    double conversao, celso;
    scanf("%d",&numeroDeConversao);
    for(i=0; i < numeroDeConversao; i++){
       scanf("%lf", &conversao);
       celso = 5* (conversao-32)/9;
       printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", conversao, celso);
    }

    return 0;
}