#include<stdio.h>
int main () {
    int t1, t2, t3;
    
    scanf("%d%d%d",&t1 ,&t2 ,&t3);

        if(t1 < 7 && t2 > 50 && t3 > 80000) {
            printf("ACO DE GRAU = 10\n");
        }else if(t1 < 7 && t2 > 50) {
            printf("ACO DE GRAU = 9\n");
        }else if(t1 < 7) {
            printf("ACO DE GRAU = 8\n");
        }else{
            printf("ACO DE GRAU = 7\n");
        }
    return 0;
}