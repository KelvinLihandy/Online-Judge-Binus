#include <stdio.h>

int main(){
    long long int T;
    long long int N;
    long long int M;
    do{
        scanf("%lld", &T);
    }while(T > 1000 || T < 1);
    for(long int i=0; i<T; i++){
        scanf("%lld %lld", &N, &M);
        if(N%2 == 1 && M%2 == 1){
            printf("Case #%ld: Need more frogs\n", i+1);
        }
        else{
            printf("Case #%ld: Party time!\n", i+1);
        }
    }
    return 0;
}