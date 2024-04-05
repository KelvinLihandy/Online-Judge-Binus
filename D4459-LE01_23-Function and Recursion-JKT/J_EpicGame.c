#include <stdio.h>

int main(void){
    long T;
    scanf("%ld", &T);
    for(long testCase = 1; testCase <= T; testCase++){
        long long number;
        scanf("%lld", &number);
        printf("Case #%ld: ", testCase);
        long long winner = 1;
        while(number != 1){
            if(number % 2 == 0) number = number / 2;
            else if(number % 2 != 0) number = (number*3) + 1;
            winner++;
        }
        if(winner % 2 != 0) printf("Lili\n");
        else if(winner % 2 == 0) printf("Jojo\n");
    }
    return 0;
}