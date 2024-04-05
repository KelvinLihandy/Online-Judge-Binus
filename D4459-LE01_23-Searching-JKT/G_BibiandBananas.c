#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        long int bananas;
        long int weight;
        scanf("%ld %ld", &bananas, &weight);
        long int fridgeBananas[bananas];
        long int eaten = 0;
        for(int i = 0; i < bananas; i++){
            scanf("%ld", &fridgeBananas[i]);
            if(fridgeBananas[i] >= weight) eaten++;
        }
        printf("Case #%d: %ld\n", testCase, eaten);
    }
    return 0;
}