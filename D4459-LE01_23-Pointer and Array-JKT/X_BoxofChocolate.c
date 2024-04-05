#include <stdio.h>

int main(void){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        int kids;
        int chocolates;
        scanf("%d %d", &kids, &chocolates);
        long long robbed = 0;
        for(int kid = 0; kid < kids; kid++){
            int max = 1;
            for(int chocolate = 0; chocolate < chocolates; chocolate++){
                int choco;
                scanf("%d", &choco);
                if(choco > max) max = choco;
            }
            robbed += max;
        }
        printf("Case #%d: %lld\n", testCase, robbed);
    }
    return 0;
}