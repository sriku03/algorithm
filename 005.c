#include <stdio.h>

int main(){
    int num;
    if (scanf("%d", &num)){
        int a[50];
        int i;
        i=0;
        int sum;
        sum=0;
        while (i<=num-1){
            if(scanf("%d", &a[i])==1){
                sum+=a[i];
            }
            i++;
        }
        printf("%d", sum%100);
    }
    return 0;
}