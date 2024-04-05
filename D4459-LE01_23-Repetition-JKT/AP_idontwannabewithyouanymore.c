#include <stdio.h>

int main(void){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        int length;
        int key;
        scanf("%d %d", &length, &key);
        char message[101] = {};
        getchar();
        scanf("%s", message);
        for(int i = 0; i < length; i++){
            int letterNumber;
            letterNumber = (message[i] - 97) + key;
            letterNumber = letterNumber % 26;
            message[i] = letterNumber + 97;
        }
        printf("Case #%d: %s\n", testCase, message);
    }
    return 0;
}