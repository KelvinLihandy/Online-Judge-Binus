#include <stdio.h>
#include <string.h>

int main(){
    int R;
    int C;
    scanf("%d %d", &R, &C);
    char grid[R][C+1];
    for(int i = 0; i < R; i++){
        getchar();
        scanf("%s", grid[i]);
    }
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C-1; j++){
            for(int k = 0; k < C-j-1; k++){
                if(grid[i][k] > grid[i][k+1]){
                char temp = grid[i][k];
                grid[i][k] = grid[i][k+1];
                grid[i][k+1] = temp;
            }
            }
        }
    }
    for(int i = 0; i < R-1; i++){
        for(int j = 0; j < R-i-1; j++){
            if(strcmp(grid[j], grid[j+1]) < 0){
                char temp[C+1];
                strcpy(temp, grid[j]);
                strcpy(grid[j], grid[j+1]);
                strcpy(grid[j+1], temp);
            }
        }
    }
    for(int i = 0; i < R; i++){
        printf("%s\n", grid[i]);
    }
}