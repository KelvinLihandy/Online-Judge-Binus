#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        int N;
        int M;
        scanf("%d %d", &N, &M);
        int rooms[10001] ={};
        for(int patternNumber = 1; patternNumber <= M; patternNumber++){
            int pattern;
            scanf("%d", &pattern);
            for(int roomNumber = 1; roomNumber <= N; roomNumber++){
                if(roomNumber % pattern == 0 && rooms[roomNumber-1] == 0){
                    rooms[roomNumber-1] = 1;
                }
                else if(roomNumber % pattern == 0 && rooms[roomNumber-1] == 1){
                    rooms[roomNumber-1] = 0;
                }
            }   
        }
        int allLock = 0;
        printf("Case #%d:", testCase);
        for(int i = 0; i < N; i++){
            if(rooms[i] == 0) printf(" %d", i+1);
            else			  allLock++; 
        }
        if(allLock == N) printf(" No room left!");
        printf("\n");
    }
    return 0;
}