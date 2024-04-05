#include <stdio.h>
#include <string.h>

int main(){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        getchar();
        char S[1001] = {};
        scanf("%[^\n]", S);
        int length = strlen(S);
        printf("Case #%d: ", testCase);
        for(int i = 0; i < length; i++){
            if(!(S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u' ||
               S[i] == 'A' || S[i] == 'E' || S[i] == 'I' || S[i] == 'O' || S[i] == 'U')){
                printf("%c", S[i]);
            }
        }
        printf("\n");
    }
}