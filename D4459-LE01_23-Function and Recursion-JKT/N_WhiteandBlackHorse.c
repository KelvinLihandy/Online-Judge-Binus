#include <stdio.h>

void BlackMove(int map[8][8], int blackNumber, int blackLetter, int steps){
    if((blackNumber >= 0 && blackNumber <= 7) && (blackLetter >= 0 && blackLetter <= 7) && steps >= 0 && map[blackNumber][blackLetter] == 0){
        map[blackNumber][blackLetter] = 1;
        int nextLetter[8] = {2, 2, 1, -1, -2, -2, -1, 1};
        int nextNumber[8] = {-1, 1, -2, -2, -1, 1, 2, 2};
        for(int i = 0; i < 8; i++){
            BlackMove(map, blackNumber+nextNumber[i], blackLetter+nextLetter[i], steps-1);
        }
    }
}

int WhiteMove(int map[8][8], int whiteNumber, int whiteLetter, int steps){
    if((whiteNumber >= 0 && whiteNumber <= 7) && (whiteLetter >= 0 && whiteLetter <= 7) && steps >= 0){
        if(map[whiteNumber][whiteLetter] == 1) return 1;
        else{
            int nextLetter[8] = {2, 2, 1, -1, -2, -2, -1, 1};
            int nextNumber[8] = {-1, 1, -2, -2, -1, 1, 2, 2};
            for(int i = 0; i < 8; i++){
                if(WhiteMove(map, whiteNumber+nextNumber[i], whiteLetter+nextLetter[i], steps-1) == 1) return 1;
            }
        }
    }
    return 0;
}

int main(void){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        int blackNumber;
        char blackLetter;
        int conv_blackLetter;
        int whiteNumber;
        char whiteLetter;
        int conv_whiteLetter;
        int maxStep;
        scanf("%d", &maxStep);
        getchar();
        scanf("%c%d %c%d", &blackLetter, &blackNumber, &whiteLetter, &whiteNumber);
        int map[8][8] = {};
        conv_blackLetter = blackLetter - 'A';
        conv_whiteLetter = whiteLetter - 'A';
        blackNumber = 8 - blackNumber;
        whiteNumber = 8 - whiteNumber;
        BlackMove(map, blackNumber, conv_blackLetter, maxStep);
        int possible = WhiteMove(map, whiteNumber, conv_whiteLetter, maxStep);
        printf("Case #%d: ", testCase);
        if(possible == 1) printf("YES\n");
        else if(possible == 0) printf("NO\n");
    }
    return 0;
}