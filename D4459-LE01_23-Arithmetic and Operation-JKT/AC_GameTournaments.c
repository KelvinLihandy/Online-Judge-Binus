#include <stdio.h>
#include <math.h>

int main(){
    int N;
    long long int team;
    scanf("%d", &N);
    if(N == 1){
        printf("%d\n", N);
    }
    else{
        team = pow(2, N)-1;
        printf("%lld\n", team);
    }
    return 0;
}