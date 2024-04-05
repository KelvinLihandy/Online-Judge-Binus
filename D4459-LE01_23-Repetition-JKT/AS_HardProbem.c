#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int T;
    scanf("%d", &T);
    for(int test = 1; test <= T; test++){
        int N;
        scanf("%d", &N);
        char S[N+1];
        char K[N+1];
        getchar();
        scanf("%s", S);
        getchar();
        scanf("%s", K);
        int cr = 0;
        int length = strlen(S);
        for(int i = 0; S[i] != '\0'; i++){
            S[i] = toupper(S[i]);
            K[i] = toupper(K[i]);
            if(S[i] == K[i]) cr++;
        }
        int score = 100 * cr/length;
        printf("Case #%d: %d\n", test, score);
    }
    return 0;
}