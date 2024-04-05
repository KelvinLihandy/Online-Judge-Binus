#include <stdio.h>

int main(void){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        int initial;
        int conversion;
        scanf("%d %d", &initial, &conversion);
        int converted = 0;
        int consumed = 0;
        int empty = 0;
        consumed += initial;
        empty += initial;
        while(empty >= conversion){
            empty -= conversion;
            converted++;
            consumed++;
            empty++;
        }
        printf("Case #%d: %d\n", testCase, consumed);
    }
    return 0;
}