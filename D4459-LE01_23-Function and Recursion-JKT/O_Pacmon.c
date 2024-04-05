#include <stdio.h>

int eat = 0;

void Pacmon(int map[100][100], int iStart, int jStart, int row, int column){
    if((iStart >= 0 && iStart < row) && (jStart >= 0 && jStart < column) && map[iStart][jStart] == 1 || map[iStart][jStart] == 2){
        if(map[iStart][jStart] == 2) eat++;
        map[iStart][jStart] = -1;
        Pacmon(map, iStart-1, jStart, row, column);
        Pacmon(map, iStart, jStart+1, row, column);
        Pacmon(map, iStart+1, jStart, row, column);
        Pacmon(map, iStart, jStart-1, row, column);
    }
}

int main(void){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        int row;
        int column;
        scanf("%d %d", &row, &column);
        char pacmon[101][101] = {};
        for(int i = 0; i < row; i++){
            getchar();
            scanf("%[^\n]", pacmon[i]);
        }
        int map[100][100] = {};
        int iStart;
        int jStart;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < column; j++){
                if(pacmon[i][j] == '#') map[i][j] = 0;
                else if(pacmon[i][j] == '.' ) map[i][j] = 1;
                else if(pacmon[i][j] == '*') map[i][j] = 2;
                else if(pacmon[i][j] == 'P'){
                    map[i][j] = 1;
                    iStart = i;
                    jStart = j;
                }
            }
        }
        Pacmon(map, iStart, jStart, row, column);
        printf("Case #%d: %d\n", testCase, eat);
        eat = 0;
    }
    return 0;
}