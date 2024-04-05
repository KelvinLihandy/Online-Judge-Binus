#include <stdio.h>

int main(){
    int M;
    int N;
    scanf("%lld %lld", &M, &N);
    int X[M];
    int Y[N];

    for(int i = 0; i < M; i++){
    scanf("%lld", &X[i]);
        getchar();
    }
    for(int j = 0; j < N; j++){
        scanf("%lld", &Y[j]);
        getchar();
    }
    int maxwp = 0;
    for(int i = 0; i < M; i++){
        if(maxwp < X[i]){
            maxwp = X[i];
        }
    }
    int maxdg = 0;
    for(int i = 0; i < N; i++){
        if(maxdg < Y[i]){
            maxdg = Y[i];
        }
    }
    if(maxwp > maxdg) printf("The dark secret was true\n");
    else              printf("Secret debunked\n");
    return 0;
}