#include <stdio.h>

int main(void){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        char string[1001] = {};
        getchar();
        scanf("%s", string);
        int changes;
        scanf("%d", &changes);
        for(int change = 1; change <= changes; change++){
            getchar();
            char initial;
            char final;
            scanf("%c %c", &initial, &final);
            for(int i = 0; string[i] != '\0'; i++){
                if(string[i] == initial) string[i] = final;
            }
        }
        printf("Case #%d: %s\n", testCase, string);
    }
    return 0;
}