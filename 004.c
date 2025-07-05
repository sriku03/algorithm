#include <stdio.h>

int main(){
    int a[3];
    if (scanf("%d %d %d", &a[0], &a[1], &a[2])==3){
        int i;
        i=0;
        int product;
        product=1;
        while(i<=2){
        product *= a[i];
        i++;
        }
        printf("%d", product);
    }  
}