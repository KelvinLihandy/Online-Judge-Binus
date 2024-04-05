#include <stdio.h>
#include <string.h>

int main(){
    int T;
    do{
        scanf("%d", &T);
    }while(T < 1 || T > 1000);
    getchar();
    for(int test = 1; test <= T; test++){
        char S[501];
        scanf("%s", S);
        int length = strlen(S);
        int check = 0;
        for(int i = 0 ; i < length; i++){
            if(S[i] == S[length - 1 - i]){
                check = 1;
            }
            else{
                check = 0;
                break;
            }
        }
        if(check) printf("Case #%d: Yay, it's a palindrome\n", test);
        else      printf("Case #%d: Nah, it's not a palindrome\n", test);
    }
    return 0;
}