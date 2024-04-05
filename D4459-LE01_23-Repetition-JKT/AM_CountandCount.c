#include <stdio.h>

int main(){
    int T;
    do{
        scanf("%d", &T);
    }while(T > 20 || T < 1);

    for(int test = 1; test <= T; test++){
        long long int N;
        do{
            scanf("%lld", &N);
        }while(N > 10000 || N < 1);
        printf("Case #%d:\n", test);
        for(long long int i = 1; i <= N; i++){
            if(i % 15 == 0){
                printf("%lld Lili\n", i);
            }
            else if((i % 3 == 0 || i % 5 == 0)){
                printf("%lld Jojo\n", i);
            }
            else{
                printf("%lld Lili\n", i);
            }
        }
    }
    return 0;
}