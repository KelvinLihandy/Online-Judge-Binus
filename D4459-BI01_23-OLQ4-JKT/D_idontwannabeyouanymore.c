#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    int T;
    scanf("%d", &T);
    for(int a = 0; a < T; a++){
        int N;
        scanf("%d", &N);
        getchar();
        char s[N+1];
        scanf("%[^\n]", s);
        int j = 0;
        for(int i = 0; i < strlen(s); i++){
            if(isalpha(s[i])){
                s[j] = s[i];
                j++;
            }
        }
        s[j] = '\0';
        printf("Case #%d: %s\n", a+1, s);
    }
    return 0;
}
