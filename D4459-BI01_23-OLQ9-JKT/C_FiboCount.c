#include <stdio.h>

long long int count = 0;
int fibo(int n){
    count++;
    if(n == 0 || n == 1) return 1;
    else return fibo(n-1) + fibo(n-2);
    return -1;
}

int main(){
    int T;
    do{
        scanf("%d", &T);
    }while(T > 30 || T < 1);
    for(int testCase = 1; testCase <= T; testCase++){
        int n;
        do{
            scanf("%d", &n);
        }while(n > 30 || n < 1);
        fibo(n);
        printf("Case #%d: %lld\n", testCase, count);
        count = 0;
    }
    return 0;
}