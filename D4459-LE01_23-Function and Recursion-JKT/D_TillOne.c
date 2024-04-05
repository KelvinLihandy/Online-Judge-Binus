#include <stdio.h>

long long int func(long long int num){
    if(num == 1) return 1;
    if(num % 2 == 1) return func(num-1) + func(num+1);
    if(num % 2 == 0) return func(num/2);
}

int main(){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        long long int number;
        scanf("%lld", &number);
        printf("Case #%d: %lld\n", testCase, func(number));
    }
}