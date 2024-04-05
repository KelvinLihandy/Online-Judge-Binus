#include <stdio.h>

int main(){
    int T;
    int X;
    do{
        scanf("%d", &T);
    }while(T > 100 || T < 1);
    for(int test = 0; test < T; test++){
        scanf("%d", &X);
        long long int a[X][X];
        long long int sum[X];
        for(int i = 0; i < X; i++){
            for(int j = 0; j < X; j++){
                scanf("%lld", &a[i][j]);
            }
        }
    }
    return 0;
}