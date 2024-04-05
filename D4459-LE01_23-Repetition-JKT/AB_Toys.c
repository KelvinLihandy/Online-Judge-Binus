#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    for(int test = 1; test <= T; test++){
        long int N;
        long int A;
        long int B;
        long int C;
        long int D;
        int check = 0;
        scanf("%ld %ld %ld %ld %ld", &N, &A, &B, &C, &D);
        for(int i = 1; i <= N; i++){
            if(i % A == 0 || i % B == 0 || i % C == 0 || i % D == 0){
            check++;
            }
        }
        printf("Case #%d: %d\n", test, check);
    }
    return 0;
}