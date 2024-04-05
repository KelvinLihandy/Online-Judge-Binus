#include <stdio.h>
#include <string.h>

int main(void){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        char string[1001] = {};
        getchar();
        scanf("%s", string);
        printf("Case %d: ", testCase);
        for(int i = 0; i < strlen(string); i++){
            printf("%d", string[i]);
            if(i < (strlen(string)-1)) printf("-");
        }
        printf("\n");
    }
    return 0;
}