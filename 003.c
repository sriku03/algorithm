#include <stdio.h>

int main (){
    int num;
    if (scanf("%d", &num)==1){
        int i;
        i=0;
        int sum;
        sum=0;
        int a[50];//動的にメモリを取得することはできない
        while (i<=num-1){
        if (scanf("%d", &a[i])==1){
            sum+=a[i];
            i++;
        }
        }
    printf("%d", sum);
    }
}