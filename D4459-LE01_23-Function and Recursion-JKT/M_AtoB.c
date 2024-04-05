#include <stdio.h>

int main(void){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        long long start;
        int end;
        scanf("%lld %d", &start, &end);
        int maxIterate = 10000;
        int iterate = 0;
        while(start != end && iterate < maxIterate){
            if(start % 2 == 0) start = start / 2;
            else if(start % 2 != 0) start = start*3 + 1;
            iterate++;
        }
        printf("Case #%d: ", testCase);
        if(start == end) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}