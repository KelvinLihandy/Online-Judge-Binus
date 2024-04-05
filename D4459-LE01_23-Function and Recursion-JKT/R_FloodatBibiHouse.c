#include <stdio.h>

int tiles = 0;

void Flood(int map[100][100], int iStart, int jStart, int row, int column){
    if((iStart >= 0 && iStart < row) && (jStart >= 0 && jStart < column) && map[iStart][jStart] == 1){
        map[iStart][jStart] = 2;
        tiles++;
        Flood(map, iStart-1, jStart, row, column);
        Flood(map, iStart, jStart+1, row, column);
        Flood(map, iStart+1, jStart, row, column);
        Flood(map, iStart, jStart-1, row, column);
    }
}

int main(void){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        int row;
        int column;
        scanf("%d %d", &row, &column);
        char houseChar[101][101] = {};
        for(int i = 0; i < row; i++){
            getchar();
            scanf("%[^\n]", houseChar[i]);
        }
        int map[100][100] = {};
        int iStart;
        int jStart;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < column; j++){
                if(houseChar[i][j] == '#') map[i][j] = 0;
                else if(houseChar[i][j] == '.' ) map[i][j] = 1;
                else if(houseChar[i][j] == 'S'){
                    map[i][j] = 1;
                    iStart = i;
                    jStart = j;
                }
            }
        }
        Flood(map, iStart, jStart, row, column);
        printf("Case #%d: %d\n", testCase, tiles-1);
        tiles = 0;
    }
    return 0;
}
