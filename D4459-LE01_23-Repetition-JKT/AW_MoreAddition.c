#include <stdio.h>

int main(){
    long int N;
    scanf("%ld", &N);
    long int ways = 0;
    for(long int j = 0; j <= N; j++){
        for(long int l = 0; l <= N; l++){
            for(long int b = 0; b <= N; b++){
                if(j + l > N || l + b > N || j + b > N) continue;
                if(j + l + b == N){
                    ways++;
                }
            }
        }
    }
    printf("%ld\n", ways);
    return 0;
}