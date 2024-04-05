#include <stdio.h>

int knightMove(int startNumber, int startLetter, int endNumber, int endLetter, int move){
    if(startNumber < 0 || startNumber > 7 || startLetter < 0 || startLetter > 7) return 6;
    if(move >= 6) return move;
    if(startNumber == endNumber && startLetter == endLetter) return move;
    int moves[8];
    int nextLetter[8] = {2, 2, 1, -1, -2, -2, -1, 1};
    int nextNumber[8] = {-1, 1, -2, -2, -1, 1, 2, 2};
    for(int i = 0; i < 8; i++){
        moves[i] = knightMove(startNumber+nextNumber[i], startLetter+nextLetter[i], endNumber, endLetter, move+1);
    }
    int mostMove = 6;
    for(int i = 0; i < 8; i++){
        if(moves[i] < mostMove) mostMove = moves[i];
    }
    return mostMove;
}

int main(){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        int startNumber;
        char startLetter;
        int conv_startLetter;
        int endNumber;
        char endLetter;
        int conv_endLetter;
        getchar();
        scanf("%c%d %c%d", &startLetter, &startNumber, &endLetter, &endNumber);
        conv_startLetter = startLetter - 65;
        conv_endLetter = endLetter - 65;
        startNumber = 8 - startNumber;
        endNumber = 8 - endNumber;
        
        int moves = knightMove(startNumber, conv_startLetter, endNumber, conv_endLetter, 0);
        printf("Case #%d: %d\n",testCase, moves);
    }
    return 0;
}