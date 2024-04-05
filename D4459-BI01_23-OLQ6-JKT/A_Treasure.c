#include <stdio.h>

int main(){
    int T;
    long long int N;
    long long int M;
    long long int P;
    do{
        scanf("%d", &T);
    }while(T > 10 || T < 1);
    for(int test = 1; test <= T; test++){
        scanf("%lld %lld", &N, &M);
        long long int P[M];
        for(int i = 0; i < M; i++){
            scanf("%d", &P[i]);
        }
        long long int nt = 0;
        for(int j = 0; j < M; j++){
            int check = 0;
            for(int k = 0 ; k < M; k++){
                if(j != k && P[j] == P[k]){
                    nt = nt+1;
                }
                
            }
        }
        printf("%lld", nt); 
    }
    return 0;
}