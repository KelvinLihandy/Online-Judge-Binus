#include <stdio.h>

int main(){
    int T;
    int A[1001];
    int B[1001];
    scanf("%d", &T);
    for(int i=0; i<T;i++){
        scanf("%d %d", &A[i], &B[i]);
    }
    for(int j=0; j<T; j++){
        if(A[j] == B[j]){
            continue;
        }
        if(A[j] > B[j]){
            printf("Case #%d: Go-Jo\n", j+1);
        }
        else{
            printf("Case #%d: Bi-Pay\n", j+1);
        }
    }
    return 0;
}