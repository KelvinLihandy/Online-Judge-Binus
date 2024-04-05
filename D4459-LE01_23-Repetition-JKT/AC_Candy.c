#include <stdio.h>
#include <string.h>

int main(){
    int T;
    long long int temp;
    long long int i;
    long long int j;
    int test;
    scanf("%d", &T);
    for(int test = 0; test < T; test++){
        long long int N;
        long long int M;
        scanf("%lld %lld", &N, &M);
        long long int CandyPrice[N];
        long long int BuyCount[N];
        for(int i = 0; i < N; i++){
            scanf("%lld", &CandyPrice[i]);
            BuyCount[i] = M / CandyPrice[i];
        }
        for(i = 0; i < N; i++){
            if(BuyCount[0] < BuyCount[i]){
            BuyCount[0] = BuyCount[i];
            } 
        }
        printf("Case #%d: %lld\n", test+1, BuyCount[0]);
        memset(CandyPrice, 0, sizeof(CandyPrice));
        memset(BuyCount, 0, sizeof(BuyCount));
    }
    return 0;
}