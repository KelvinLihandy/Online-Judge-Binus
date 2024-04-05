#include <stdio.h>

int main(){
    int array[100][100] = {};
    int N;
    int M;
    int Q;
    scanf("%d %d %d", &N, &M, &Q);
    for(int i = 0; i < Q; i++){
        int a;
        int b;
        int c;
        scanf("%d %d %d", &a, &b, &c);
        array[a][b] = c;
    }
    for(int i = 0; i < N; i++){
        int j = 0;
        printf("%d", array[i][j]);
        for(int j = 1; j < M; j++){
            printf(" %d", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}