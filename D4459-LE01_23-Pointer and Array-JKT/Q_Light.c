#include <stdio.h>

int main(void){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        int friends;
        int rooms;
        int visits;
        scanf("%d %d %d", &friends, &rooms, &visits);
        int map[50][50] = {};
        int lamp[50] = {};
        for(int i = 0; i < friends; i++){
            for(int j = 0; j < rooms; j++){
                scanf("%d", &map[i][j]);
            }
        }
        int visitList[50] = {};
        for(int i = 0; i < visits; i++){
            scanf("%d", &visitList[i]);
            for(int j = 0; j < rooms; j++){
                if(map[visitList[i]-1][j] == 1 && lamp[j] == 1) lamp[j] = 0;
                else if(map[visitList[i]-1][j] == 1 && lamp[j] == 0) lamp[j] = 1;
            }
        }
        printf("Case #%d:\n", testCase);
        for(int i = 0; i < rooms; i++){
            if(lamp[i] == 1) printf("YES\n");
            else if(lamp[i] == 0) printf("NO\n");
        }
    }
    return 0;
}