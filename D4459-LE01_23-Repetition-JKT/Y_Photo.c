#include <stdio.h>

int main(){
    int T;
    do{
    scanf("%d", &T);
    }while(T < 1 || T > 100);
    for(int test = 0; test < T; test++){
        int N;
        int M;
        do{
        scanf("%d %d", &N, &M);
        }while((N < 3 || N > 100) || (M < 3 || M > 100));

        printf("Case #%d:\n", test+1);
        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= M; j++){
                if(i == 1 || i == N)      printf("#");
                else if(j == 1 || j == M) printf("#");
                else                      printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}