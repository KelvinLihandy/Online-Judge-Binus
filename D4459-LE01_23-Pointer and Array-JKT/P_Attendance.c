#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    getchar();
    int A[N][N];
    int count[101] = {};
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%d", &A[i][j]);
            getchar();
            count[A[i][j]]++;
        }
    }
    int incomplete = 0;
    for(int k = 1; k <= N; k++){
        if(count[k] < N) incomplete++;
    }
    printf("%d\n", incomplete);
    return 0;
}