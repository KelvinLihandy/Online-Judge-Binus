#include <stdio.h>

int main(){
    int T;
    int X;
    do{
        scanf("%d", &T);
    }while(T > 100 || T < 1);
    for(int test = 1; test <= T; test++){
        scanf("%d", &X);
        long long int a[X][X];
        long long int sum[100]={};
        for(int i = 0; i < X; i++){
            for(int j = 0; j < X; j++){
                scanf("%lld", &a[i][j]);
                sum[j] += a[i][j];
            }
        }
        printf("Case #%d: ", test);
        for(int j = 0; j < X; j++){
            if(j == X - 1) printf("%lld", sum[j]);
            else printf("%lld ", sum[j]);
        }
        printf("\n");
    }
    return 0;
}