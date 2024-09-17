#include<stdio.h>
int main () {
    int n;
    double ni,np,nic,npc;
    
    while(1){
        scanf("%d",&n);
        if(n == 0){
            printf("MEDIA PAR: %.6lf\n",np/npc);
            printf("MEDIA IMPAR: %.6lf\n",ni/nic);
            break;
        }
        if(n % 2 == 0){
            np += n;
            npc++;
        }else{
            ni += n;
            nic++;
        }
    }
    return 0;
}