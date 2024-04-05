#include <stdio.h>

int main(){
    long long int T;
    long long int A;
    int B;
    long long int C;
    long long int back;
    scanf("%lld", &T);
    for(long long int i = 0; i < T; i++){
        scanf("%lld %d %lld", &A, &B, &C);
        back = 0.01 * A * B;
        if(back > C){
            back = C;
        }
        printf("Case #%lld: %lld\n", i+1, back);
    }
    return 0;
}