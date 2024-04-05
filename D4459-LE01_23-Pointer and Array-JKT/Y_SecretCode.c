#include <stdio.h>
#include <string.h>

int main(void){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        int swaps;
        char code[1001];
        getchar();
        scanf("%d %s", &swaps, code);
        for(int swap = 1; swap <= swaps; swap++){
            int initial;
            int final;
            scanf("%d %d", &initial, &final);
            int startIndex = initial-1;
            int endIndex = final-1;
            while(startIndex < endIndex){
                char temp = code[startIndex];
                code[startIndex] = code[endIndex];
                code[endIndex] = temp;
                startIndex++;
                endIndex--;
            }
        }
        printf("Case #%d: %s\n", testCase, code);
    }
    return 0;
}