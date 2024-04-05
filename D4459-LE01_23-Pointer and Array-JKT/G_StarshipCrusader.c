#include <stdio.h>

int main(void){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        int tests;
        scanf("%d", &tests);
        int result[10000] = {};
        int minimum[10000] = {};
        for(int test = 0; test < tests; test++){
            scanf("%d", &result[test]);
        }
        for(int test = 0; test < tests; test++){
            scanf("%d", &minimum[test]);
        }
        int failed = 0;
        for(int test = 0; test < tests; test++){
            if(result[test] < minimum[test]) failed++;
        }
        printf("Case #%d: %d\n", testCase, failed);
    }
    return 0;
}