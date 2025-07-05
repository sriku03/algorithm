#include <stdio.h>

int main(){
    int a;
    if (scanf("%d", &a)==1){
        printf("%d",2*a+3);
        return 0;
    }
    return 1;
}