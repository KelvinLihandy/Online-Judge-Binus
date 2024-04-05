#include <stdio.h>

int main(){
    long long int A;
    long long int B;
    long long int C;
    long long int res;
    scanf("%lld %lld %lld", &A, &B, &C);
    res = A*B*C;
    printf("%lld\n", res);
    return 0;
}