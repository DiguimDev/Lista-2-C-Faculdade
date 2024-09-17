#include<stdio.h>
int main () {
    double v1, v2, v3;
    scanf("%lf%lf%lf", &v1 ,&v2 ,&v3);
    if(v1 >= v2){
        if(v1 >= v3){
            if(v2 > v3){
                printf("%.2lf, %.2lf, %.2lf\n",v3 ,v2 ,v1);
            }else{
                printf("%.2lf, %.2lf, %.2lf\n",v2 ,v3 ,v1);
            }
        }
    }if(v2 >= v1){
        if(v2 >= v3){
            if(v1 >= v3){
                printf("%.2lf, %.2lf, %.2lf\n",v3 ,v1 ,v2);
            }else{
                printf("%.2lf, %.2lf, %.2lf\n",v1 ,v3 ,v2);
            }
        }
    }if(v3 >= v2){
        if(v3 >= v1){
            if(v2 >= v1){
                printf("%.2lf, %.2lf, %.2lf\n",v1 ,v2 ,v3);
            }else{
                printf("%.2lf, %.2lf, %.2lf\n",v2 ,v1 ,v3);
            }
        }
    }
    
    return 0;
}