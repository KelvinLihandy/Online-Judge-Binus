#include <stdio.h>

int main(void){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        int boxes;
        scanf("%d", &boxes);
        int number[1000] = {};
        for(int box = 0; box < boxes; box++){
            scanf("%d", &number[box]);
        }
        printf("Case #%d:", testCase);
        for(int box = boxes-1; box >= 0; box--){
            printf(" %d", number[box]);
        }
        printf("\n");
    }
    return 0;
}