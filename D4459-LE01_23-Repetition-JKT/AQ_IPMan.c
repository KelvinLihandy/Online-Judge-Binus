//UNFINISHED


#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        char address[101] = {};
        getchar();
        scanf("%s", address);
        int length = strlen(address);
        int numBefore = 0;
        int dots = 0;
        int digits = 0;
        int check = 0;
        for(int i = 0; i < length; i++){
            if(isdigit(address[i])){
                numBefore = 1;
                digits++;
                check = 1;
            }
            else if(numBefore == 1 && address[i] == '.' && dots <= 5){
                dots++;
                numBefore = 0;
                check = 1;
            }
            else check = 0;
        }
        printf("Case #%d: ", testCase);
        if(check == 1 && digits >= 6 && dots == 5) printf("YES\n");
        else if(check == 0 || digits < 6 || dots != 5) printf("NO\n");
    }
    return 0;
}