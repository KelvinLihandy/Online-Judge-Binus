#include <stdio.h>

int main(void){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        int distance;
        scanf("%d", &distance);
        double n = 1.0;
        while(n <= 1414.0){
            if((n/2.0)*(2+(n-1)) >= (double) distance) break;
            else n++;
        }
        printf("Case #%d: %d\n", testCase, (int) n);
    }
    return 0;
}