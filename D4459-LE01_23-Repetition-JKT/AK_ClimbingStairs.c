#include <stdio.h>

int main(){
    long int N;
    scanf("%ld", &N);
    long int A[N];
    long int sets = 0;
    for(long int i = 0; i < N; i++){
        scanf("%ld", &A[i]);
        if(A[i] == 1) sets++;
    }
    long int step[1000] = {};
    long int set = 0;
    long int counter = 0;
    
    for(long int index = 1; index < N; index++){
        counter++;
        if(A[index] == 1){
            step[set] = counter;
            printf("%ld ", step[set]);
            set++;
            counter = 0;
        }
        if(index == N-1){
            printf("%ld\n", A[index]);
        }
    }
    return 0;
}