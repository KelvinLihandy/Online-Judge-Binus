#include <stdio.h>
#include <string.h>

void reverse(char* str, int index, int length){
    char reversed;
    if(length == index) return;
    reversed = str[index];
    reverse(str, index+1, length);
    printf("%c", reversed);
}

int main(){
    int T;
    scanf("%d", &T);
    for(int test = 1; test <= T; test++){
        char S[1000];
        getchar();
        scanf("%[^\n]", S);
        int length = strlen(S);
        printf("Case #%d: ", test);
        reverse(S, 0, length);
        printf("\n");
    }
    return 0;
}