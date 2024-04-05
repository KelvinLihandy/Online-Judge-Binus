#include <stdio.h>

int main(){
    int T;
    long int N;

    scanf("%d", &T);

    for(int test = 0; test < T; test++){
        scanf("%ld", &N);
        long int A;//[N];
        long int odd = 0;
        long int even = 0;
        for(int i = 0; i < N; i++){
            scanf("%ld", &A);//[i]);
            if(A % 2 == 0) even++;
            else odd++;
        }
        printf("Odd group : %ld integer(s).\n", odd);
        printf("Even group : %ld integer(s).\n\n", even);
    }
    return 0;
}