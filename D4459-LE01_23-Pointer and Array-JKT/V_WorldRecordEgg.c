#include <stdio.h>

long long Fibonacci(int day){
    long long fibofied1 = 0;
    long long fibofied2 = 1;
    long long fibofied;
    if(day < 1) fibofied = -1;
    else if(day == 1) fibofied = fibofied1;
    else if(day == 2 || day == 3) fibofied = fibofied2;
    for(long long i = 2; i < day; i++){
        fibofied = fibofied1 + fibofied2;
        fibofied1 = fibofied2;
        fibofied2 = fibofied;
    }
    return fibofied;
}

int main(void){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        int day;
        scanf("%d", &day);
        printf("Case #%d: %lld\n", testCase, Fibonacci(day));
    }
    return 0;
}