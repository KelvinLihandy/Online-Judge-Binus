#include <stdio.h>

int main(void){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        long long total = 0;
        int type;
        scanf("%d", &type);
        for(int i = 0; i < type; i++){
            int items;
            scanf("%d", &items);
            total += items;
        }
        printf("Case #%d: %lld\n", testCase, total);
    }
    return 0;
}