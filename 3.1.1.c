///素数判定
#include <stdio.h>

int prime(int N){///素数なら1を素数じゃないなら0を返す関数
    int i;
    i=2;
    while (i<N){
        if (N%i == 0){
            return 0;
        }
        i++;
    }
    return 1;
}

int main(){
    int a;
    printf("数字を入力してください\n");
    if (scanf("%d", &a)==0){
        printf("数字ではありません");
    }
    else if (a<=1){
        printf("素数じゃありません");
    }
    else if (prime(a)==0){
        printf("素数じゃありません");
    }
    else if (prime(a)==1){
        printf("素数です");
    }
    return 0;
}