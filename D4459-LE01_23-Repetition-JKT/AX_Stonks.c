#include <stdio.h>

int main(){
    long long int N;
    scanf("%lld", &N);
    long long int A[N];
    long long int profit = 0;
    for(int i = 0; i < N; i++){
        scanf("%lld", &A[i]);
        if(A[i] > 0) profit += A[i];
    }
    printf("%lld\n", profit);
    return 0;
}