#include<stdio.h>
#include<math.h>
int main () {
    int a, b, c, i,mmc, j;
    scanf("%d%d%d",&a, &b, &c);
    if(a == 0 || b == 0 || c == 0){
        return 0;
    }
    if(a < 0){
        a = a * -1;
    }
    if(b < 0){
        b = b * -1;
    }
    if(c < 0){
        c = c * -1;
    }
    mmc = 1;
    for(i=2;; i++){
        if(a == 0 || b == 0 || c == 0){
        break;
    }
            if(a % i == 0 || b % i == 0 || c % i == 0){
             while(1) {
                printf("%d %d %d :%d\n", a, b, c, i);
                    if(a % i == 0 && a != 0){a = a / i;}
                    if(b % i == 0 && b != 0){b = b / i;}
                    if(c % i == 0 && c != 0){c = c / i;}
                    mmc *= i;
                    if(a % i != 0 && b % i != 0 && c % i != 0){break;}
                    }

            if(a <= 1 && b <= 1 && c <= 1){
            break;
                }
            }
            
        }
    if(mmc == 1){
        printf("%d %d %d :%d\n", 1, 1, 1, 1);
    }

    printf("MMC: %d\n",mmc);
    return 0;

}