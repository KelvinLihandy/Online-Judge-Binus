#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int array[N][N];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%d", &array[i][j]);
        }
    }
    for(int i = 0; i < N; i++){
        int j = 0;
        printf("%d", array[j][i]);
        for(int j = 1; j < N; j++){
            printf(" %d", array[j][i]);
        }
        printf("\n");
    }
    return 0;
}