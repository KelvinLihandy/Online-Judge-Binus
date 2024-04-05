#include <stdio.h>

int main(void){
    int balloons;
    long long strength;
    long long popped = 0;
    scanf("%d %lld", &balloons, &strength);
    for(int i = 0; i < balloons; i++){
        long long balloon;
        scanf("%lld", &balloon);
        if(strength > balloon) popped++;
    }
    printf("%lld\n", popped);
    return 0;
}