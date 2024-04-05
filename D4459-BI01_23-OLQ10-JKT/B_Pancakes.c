#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    for(int test = 1; test <= T; test++){
        long long int N;
        scanf("%lld", &N);
        long long int cuts[N];
        printf("Case %d:", test);
        for(int i = 0; i < N; i++){
            cuts[i] = (i * i + i + 2)/2;
            printf(" %lld", cuts[i]);
        }
        printf("\n");
    }
    return 0;
}