#include <stdio.h>

long long int OddJobonacci(int number){
    if(number == 0) return 0;
    if(number == 1 || number % 2 != 0) return 1;
    return OddJobonacci(number-1) + OddJobonacci(number-2);
}

int main(){
    int number;
    scanf("%d", &number);
    printf("%lld\n", OddJobonacci(number));
}