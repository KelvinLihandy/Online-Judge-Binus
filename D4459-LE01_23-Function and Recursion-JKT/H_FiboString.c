#include <stdio.h>
#include <string.h>

int main(){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        int n;
        scanf("%d", &n);
        char string1[1974] = {};
        char stringResult[1974] = {};
        getchar();
        scanf("%s %s", string1, stringResult);
        char stringTemp[1974] = {};
        for(int i = 2; i <= n; i++){
            strcpy(stringTemp, string1);
            strcpy(string1, stringResult);
            strcat(stringResult, stringTemp);
        }
        printf("Case #%d: %s\n", testCase, stringResult);
    }
    return 0;
}