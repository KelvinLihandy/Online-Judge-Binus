#include <stdio.h>

int main(){
    int N;
    int M;
    scanf("%d %d", &N, &M);
    for(int i = 0; i <= M; i++){
        printf("%d\n", i+N);
    }
    return 0;
}