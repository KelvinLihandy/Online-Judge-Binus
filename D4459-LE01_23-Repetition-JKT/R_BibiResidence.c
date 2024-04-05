#include <stdio.h>
#include <stdlib.h>

int main(){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        int length;
        scanf("%d", &length);
        //printf("%d", length);
        long long int numbers[length];
        for(int i = 0; i < length; i++){
            scanf("%lld", &numbers[i]);
        }
        long long int diff = 1999999999;
        for(int i = 0; i < (length-1); i++){
            long long int currentDiff = abs(numbers[i+1]-numbers[i]);
            if(currentDiff < diff) diff = currentDiff;
        }
        printf("Case #%d: %lld\n", testCase, diff);
    }
}