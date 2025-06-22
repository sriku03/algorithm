///素数判定
#include <stdio.h>

int prime(long long N){///素数なら1を素数じゃないなら0を返す関数
    long long i;
    i=2;
    if (N==2){
        return 1;
    }
    while (i*i<=N){
        if (N%i == 0){
            return 0;
        }
        i++;
    }
    return 1;
}

int main(){
    long long a;
    if (scanf("%lld", &a)==1){
       if (prime(a)==0){
        printf("No");
        }
        else if (prime(a)==1){
        printf("Yes");
        }
    }
    return 0; 
}