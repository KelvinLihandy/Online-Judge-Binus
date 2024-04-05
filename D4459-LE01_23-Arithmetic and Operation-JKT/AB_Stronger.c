#include <stdio.h>

int main(){
    long long int N;
    long long int dmg = 0;
    scanf("%lld", &N);
    for(int i=0; i<N; i++){
        dmg = dmg + 100 + i*50;
    }
    printf("%lld\n", dmg);
    return 0;
}