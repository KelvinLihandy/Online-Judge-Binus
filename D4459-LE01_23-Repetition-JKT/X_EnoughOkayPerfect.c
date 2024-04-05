#include <stdio.h>

int main(){
    int Q;
    do{
        scanf("%d", &Q);
    }while(Q > 30 || Q < 0);
    long long int N = 1;
    for(int i = 0; i < Q; i++){
        N = (2 * N) + 1;
    }
    printf("%lld\n", N);
    return 0;
}