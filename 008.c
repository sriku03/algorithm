#include <stdio.h>

int main(){
    int a;
    int b;
    int i=1;
    int num=0;
    if(scanf("%d %d", &a, &b)==2){
        while(i<=a){
            int j=1;
            while(j<=a){
                if(i+j<=b){
                    num++;
                }
                j++;
            }
            i++;
        }
        printf("%d",num);
        return 0;
    }
    return 1;
}