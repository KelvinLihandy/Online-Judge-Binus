#include <stdio.h>
#include <string.h>

int main(void){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        char string[1001];
        getchar();
        scanf("%s", string);
        int mid = strlen(string) / 2;
        int check = 0;
        for(int i = 0; i <= mid; i++){
            if(string[i] == string[strlen(string)-1-i]){
                check = 1;
            }
            else{
                check = 0;
                break;
            }
        }
        printf("Case #%d: ", testCase);
        if(check == 1) printf("yes\n");
        else if(check == 0) printf("no\n");
    }
    return 0;
}