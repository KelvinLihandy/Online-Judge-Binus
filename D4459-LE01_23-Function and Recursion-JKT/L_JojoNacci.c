#include <stdio.h>

long long int JojoNacci(int index, int num0, int num1){
    if(index == 0) return num0;
    if(index == 1) return num1;
    return JojoNacci(index-1, num0, num1) - JojoNacci(index-2, num0, num1);
}

int main(){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        int index;
        int num0;
        int num1;
        scanf("%d %d %d", &index, &num0, &num1);
        printf("Case #%d: %lld\n", testCase, JojoNacci(index, num0, num1));
    }
}