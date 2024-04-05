#include <stdio.h>

int main(){
    long long int N;
    long long int scr = 0;
    scanf("%lld", &N);
    for(int i=0; i<N; i++){
        scr = scr + 100 + i*50;
    }
    printf("%lld\n", scr);
    return 0;
}