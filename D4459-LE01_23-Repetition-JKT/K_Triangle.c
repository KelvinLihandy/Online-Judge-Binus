#include <stdio.h>

int main(void){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        int height;
        scanf("%d", &height);
        int x = 0;
        int y = 0;
        printf("Case #%d:\n", testCase);
        for(int i = 1; i <= height; i++){
            y++;
            for(int j = 1; j <= height-i; j++){
                x++;
                printf(" ");
            }
            for(int j = 1; j <= i; j++){
                x++;
                if((x+y) % 2 == 0) printf("*");
                else printf("#");
            }
            printf("\n");
            x = 0;
        }
    }   
    return 0;
}