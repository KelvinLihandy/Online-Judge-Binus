#include <stdio.h>

int main(){
    int N;
    do{
        scanf("%d", &N);
    }while(N < 1 || N > 1000);
    int A[1001];
    int count[1001]={};
    int max = 0;
    for(int i = 0; i < N; i++){
        do{
            scanf("%d", &A[i]);
        }while(A[i] < 1 || A[i] > 1000);
        count[A[i]-1]++;
    }
    for(int j = 0; j < 1001; j++){
        if(max < count[j]) max = count[j];
    }
    printf("%d\n", max);
    return 0;
}