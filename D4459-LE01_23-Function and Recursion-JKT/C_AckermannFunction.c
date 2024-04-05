#include <stdio.h>

int AckermannFunc(int m, int n){
    if(m == 0) return n+1;
    if(m > 0 && n == 0) return AckermannFunc(m-1, 1);
    if(m > 0 && n > 0) return AckermannFunc(m-1, AckermannFunc(m, n-1));
}

int main(){
    int M;
    int N;
    scanf("%d %d", &M, &N);
    printf("result: %d\n", AckermannFunc(M, N));
    return 0;
}