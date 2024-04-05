#include <stdio.h>

int main(){
    int N;
    int M;
    scanf("%d %d", &N, &M);
    int change[M];
    char word[N+1];
    scanf("%s", word);
    for(int i = 0; i < M; i++){
        scanf("%d", &change[i]);
        if(word[change[i]] >= 65 && word[change[i]] <=90){
            word[change[i]] += 32;
        }
        else if(word[change[i]] >= 97 && word[change[i]] <= 122){
            word[change[i]] -= 32;
        }
    }
    printf("%s\n", word);
    return 0;
}