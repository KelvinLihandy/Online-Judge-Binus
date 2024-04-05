#include <stdio.h>

int main(void){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        char name[100001] = {};
        getchar();
        scanf("%s", name);
        int distinct = 0;
        int key[26] = {};
        for(int i = 0; name[i] != '\0'; i++){
            if(key[name[i]-97] == 0){
                distinct++;
                key[name[i]-97] = 1;
            }
        }
        printf("Case #%d: ", testCase);
        if(distinct % 2 == 0) printf("Yay\n");
        else printf("Ewwww\n");
    }
    return 0;
}