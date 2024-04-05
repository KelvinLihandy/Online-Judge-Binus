#include <stdio.h>

int main(void){
    FILE *input = fopen("testdata.in", "r");
    int T;
    fscanf(input, "%d\n", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        int towers;
        fscanf(input, "%d\n", &towers);
        int map[100][100] = {};
        int maxHeight = -1;
        int perimeter = 0;
        int area = 0;
        for(int tower = 0; tower < towers; tower++){
            int towerHeight;
            fscanf(input, "%d ", &towerHeight);
            perimeter += 8*towerHeight;
            area += 4*towerHeight;
            if(towerHeight > maxHeight) maxHeight = towerHeight;
            for(int i = 0; i < towerHeight; i++){
                map[i][tower] = 1;
            }
        }
        for(int i = 0; i < maxHeight; i++){
            for(int j = 0; j < towers; j++){
                if(map[i][j] == 1){
                    if(map[i-1][j] == 1 && i-1 >= 0) perimeter -= 2;
                    if(map[i+1][j] == 1 && i+1 < maxHeight) perimeter -= 2;
                    if(map[i][j-1] == 1 && j-1 >= 0) perimeter -= 2;
                    if(map[i][j+1] == 1 && j+1 < towers) perimeter -= 2;
                }
            }
        }
        printf("Case #%d: %d %d\n", testCase, perimeter, area);
    }
    return 0;
}