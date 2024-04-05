#include <stdio.h>

int main(void){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        int platters;
        int capacity;
        int eat;
        scanf("%d %d %d", &platters, &capacity, &eat);
        for(int i = 0; i < platters; i++){
            int platter;
            scanf("%d", &platter);
            if(platter > eat && platter <= capacity){
                eat = platter;
            }
        }
        printf("Case #%d: %d\n", testCase, eat);
    }
    return 0;
}