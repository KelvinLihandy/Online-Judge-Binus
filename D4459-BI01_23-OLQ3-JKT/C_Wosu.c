#include <stdio.h>

int main(){
    long long int N;
    long long int point = 0;
    scanf("%lld", &N);
    for(int i=0; i<N; i++){
        point = point + 100 + i*50;
    }
    printf("%lld\n", point);
    return 0;
}