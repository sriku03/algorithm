#include <stdio.h>

int main(){
    int a,b,c;
    if (scanf("%d %d %d", &a, &b, &c)==3 && a>=1 && a<=100 && b>=1 && b<=100 && c>=1 && c<=100){
        printf("%d", a+b+c);
    }
}