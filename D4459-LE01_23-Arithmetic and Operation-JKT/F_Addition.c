#include <stdio.h>

int main(){
    int A[3];
    int B[3];
    for(int i = 0; i<3; i++){
        scanf("%d + %d =", &A[i], &B[i]);
    }
    for(int j = 0; j<3; j++){
        printf("%d\n", A[j]+B[j]);
    }
    return 0;
}