#include <stdio.h>

int main(){
    int a,b,c;
    int i;
    i=0;
    int j;
    j=1;//N以下の正の整数だから
    if(scanf("%d", &a)==1){
        if(scanf("%d %d", &b, &c)==2 && b<c){
            while (j<=a){
                if (j%b==0){
                    i++;
                    j++;
                    continue;
                }
                else if (j%c==0){
                    i++;
                    j++;
                    continue;
                }
                j++;
            }
            printf("%d", i);
            return 0;
        }
        return 1;
    }
    return 1;
}