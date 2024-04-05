#include <stdio.h>

void result1(int N, int M1[N][N], int M2[N][N], int res1[N][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            res1[i][j] = 0;
            for(int k = 0; k < N; k++){
                res1[i][j] += M1[i][k] * M2[k][j];
            }
        }
    }
}

void result2(int N, int res1[N][N], int M3[N][N], int res2[N][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            res2[i][j] = 0;
            for(int k = 0; k < N; k++){
                res2[i][j] += res1[i][k] * M3[k][j];
            }
        }
    }
}

int main(){
    int T;
    scanf("%d", &T);
    for(int a = 0; a < T; a++){
        int N;
        scanf("%d", &N);
        int m1[N][N];
        int m2[N][N];
        int m3[N][N];
        char space[5];
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j ++){
                scanf("%d", &m1[i][j]);
            }
        }
        getchar();
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j ++){
                scanf("%d", &m2[i][j]);
            }
        }
        getchar();
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j ++){
                scanf("%d", &m3[i][j]);
            }
        }
		int res1[N][N];
        int res2[N][N];
        result1(N, m1, m2, res1);
        result2(N, res1, m3, res2);
        printf("Case #%d:\n", a + 1);
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j ++){
                printf("%d", res2[i][j]);
                if(j < N - 1){
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}